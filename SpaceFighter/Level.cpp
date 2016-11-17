/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 Level.cpp: Source file for game levels.

------------------------------------------------- */


#include "Level.h"
#include "Bullet.h"
#include "Math.h"

Level *Level::s_pCurrentLevel = nullptr;

Level::Level()
{
	s_pCurrentLevel = this;

	m_sectorSize.X = 32;
	m_sectorSize.Y = 32;

	m_sectorCount.X = (Game::GetScreenWidth() / (int)m_sectorSize.X) + 1;
	m_sectorCount.Y = (Game::GetScreenHeight() / (int)m_sectorSize.Y) + 1;

	m_totalSectorCount = m_sectorCount.X * m_sectorCount.Y;

	m_pSectors = new std::vector<GameObject *>[m_totalSectorCount];

	AddGameObject(&m_playerShip);
	m_playerShip.SetBulletPool(&m_bullets);
}

Level::~Level()
{
	s_pCurrentLevel = nullptr;

	delete[] m_pSectors;
}

void Level::LoadContent()
{
	for (unsigned int i = 0; i < 100; i++)
	{
		Bullet *pBullet = new Bullet;
		m_bullets.push_back(pBullet);
		m_gameObjects.push_back(pBullet);
	}
}

void Level::HandleInput(InputState *pInput)
{
	Vector2 direction = Vector2::Zero();
	if (pInput->IsKeyDown(ALLEGRO_KEY_DOWN)) direction.Y++;
	if (pInput->IsKeyDown(ALLEGRO_KEY_UP)) direction.Y--;
	if (pInput->IsKeyDown(ALLEGRO_KEY_RIGHT)) direction.X++;
	if (pInput->IsKeyDown(ALLEGRO_KEY_LEFT)) direction.X--;

	// Normalize the direction
	if (direction.X != 0 && direction.Y != 0)
	{
		direction *= Math::NORMALIZE_ANGLE;
	}

	// gamepad overrides keyboard input
	//Vector2 thumbstick = pInput->GetGamePadState(0).Thumbsticks.Left;
	//if (thumbstick != Vector2::Zero()) direction = thumbstick;

	m_playerShip.SetDesiredDirection(direction);
	
	if (pInput->IsKeyDown(ALLEGRO_KEY_SPACE))
	{
		m_playerShip.Fire();
	}
}

void Level::Update(const GameTime *pGameTime)
{
	for (unsigned int i = 0; i < m_totalSectorCount; i++)
	{
		m_pSectors[i].clear();
	}
	
	for (unsigned int i = 0; i < m_gameObjects.size(); i++)
	{
		m_gameObjects[i]->Update(pGameTime);
	}

	for (unsigned int i = 0; i < m_totalSectorCount; i++)
	{
		if (m_pSectors[i].size() > 1)
		{
			CheckCollisions(m_pSectors[i]);
		}
	}
}

void Level::CheckCollisions(std::vector<GameObject *> &gameObjects)
{
	const unsigned int objectCount = gameObjects.size();

	GameObject::CollisionData collision;

	for (unsigned int i = 0; i < objectCount; i++)
	{
		for (unsigned int j = i + 1; i < objectCount; i++)
		{
			if (GameObject::AreObjectsColliding(gameObjects[i], gameObjects[j], &collision))
			{
				if (collision.removeObject1) gameObjects[i]->Deactivate();
				if (collision.removeObject2) gameObjects[j]->Deactivate();
			}
		}
	}
}

void Level::Draw(const GameTime *pGameTime)
{
	for (unsigned int i = 0; i < m_gameObjects.size(); i++)
	{
		if (m_gameObjects[i]->IsActive())
		{
			m_gameObjects[i]->Draw(pGameTime);
		}
	}
}

void Level::AddGameObject(GameObject *pGameObject)
{
	m_gameObjects.push_back(pGameObject);
}

void Level::UpdateSectorPosition(GameObject *pGameObject)
{
	Vector2 position = pGameObject->GetPosition();
	Vector2 halfDimensions = pGameObject->GetHalfDimensions();

	int minX = (int)(position.X - halfDimensions.X) / (int)m_sectorSize.X;
	int maxX = (int)(position.X + halfDimensions.X) / (int)m_sectorSize.X;
	int minY = (int)(position.Y - halfDimensions.Y) / (int)m_sectorSize.Y;
	int maxY = (int)(position.Y + halfDimensions.Y) / (int)m_sectorSize.Y;

	if (minX < 0 || maxX > m_sectorCount.X || minY < 0 || maxY > m_sectorCount.Y)
	{
		return;
	}

	for (int x = minX; x <= maxX; x++)
	{
		for (int y = minY; y <= maxY; y++)
		{
			int index = y * (int)m_sectorCount.Y + x;

			m_pSectors[index].push_back(pGameObject);
		}
	}
}