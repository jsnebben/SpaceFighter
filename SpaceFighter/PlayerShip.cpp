/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 PlayerShip.cpp: Source file for the player's ship.

------------------------------------------------- */


#include "PlayerShip.h"
#include "Math.h"

ALLEGRO_BITMAP *PlayerShip::s_pTexture = nullptr;
Vector2 PlayerShip::s_textureOrigin = Vector2::Zero();

PlayerShip::PlayerShip()
{
	GameObject::Activate();

	// Set the starting position
	m_position.X = Game::GetScreenWidth() / 2;
	m_position.Y = Game::GetScreenHeight() - 100.0f;

	m_speed = 250.0f; // Ships speed is 250 pixels per second
	m_collisionRadius = 27.0f;

	m_coolDownTime = 0; // Allow ship to fire when the level starts
	m_maxCoolDownTime = 0.5f; // One half second between bullets

	m_isInvulnurable = false; // DEBUG: Allow player ship to not take damage (for testing purposes).
}

void PlayerShip::SetTexture(std::string assetPath)
{
	ALLEGRO_BITMAP *pTemp = nullptr;

	pTemp = al_load_bitmap(Game::GetContentPath(assetPath).c_str());
	if (pTemp)
	{
		s_pTexture = pTemp;
		s_textureOrigin.X = al_get_bitmap_width(s_pTexture) / 2;
		s_textureOrigin.Y = al_get_bitmap_height(s_pTexture) / 2;
	}
}

void PlayerShip::HandleInput(InputState *pInput)
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
	//direction = pInput->GetGamePadState(0).Thumbsticks.Left; // already normalized
	
	SetDesiredDirection(direction);
	
	if (pInput->IsKeyDown(ALLEGRO_KEY_SPACE)) Fire();
	if (pInput->IsKeyDown(ALLEGRO_KEY_V)) Fire2();
}

void PlayerShip::Update(const GameTime *pGameTime)
{
	// Decrement the cooldown timer
	if (m_coolDownTime > 0)
	{
		m_coolDownTime -= pGameTime->GetTimeElapsed();

		if (m_coolDownTime < 0) m_coolDownTime = 0;
	}
	
	// Update player position
	Vector2 targetVelocity = m_desiredDirection * m_speed * pGameTime->GetTimeElapsed();
	m_velocity = Vector2::Lerp(m_velocity, targetVelocity, 0.1f);
	m_position += m_velocity;

	ConfineToScreen();

	Ship::Update(pGameTime);
}

void PlayerShip::Draw(const GameTime *pGameTime)
{
	if (s_pTexture)
	{
		int x = (int)(m_position.X - s_textureOrigin.X);
		int y = (int)(m_position.Y - s_textureOrigin.Y);

		al_draw_bitmap(s_pTexture, x, y, 0);
	}
}

void PlayerShip::Fire()
{
	if (IsActive() && CanFire())
	{
		Bullet *pBullet = GetInactiveBullet();
		
		if (pBullet)
		{
			pBullet->Activate(m_position + m_gunOffset);
			m_coolDownTime = m_maxCoolDownTime;
		}
	}
}

void PlayerShip::Fire2()
{
	if (IsActive() && CanFire())
	{
		Bullet2 *pBullet2 = GetInactiveBullet2();
		
		if (pBullet2)
		{
			pBullet2->Activate(m_position + m_gunOffset);
			m_coolDownTime = m_maxCoolDownTime;
		}
	}
}

void PlayerShip::ConfineToScreen()
{
	// Screen edges
	const int LEFT = 0;
	const int RIGHT = Game::GetScreenWidth();
	const int TOP = 0;
	const int BOTTOM = Game::GetScreenHeight();

	// Check screen edges
	if (m_position.X - s_textureOrigin.X < LEFT)
	{
		m_position.X = LEFT + s_textureOrigin.X;
	}
	if (m_position.X + s_textureOrigin.X > RIGHT)
	{
		m_position.X = RIGHT - s_textureOrigin.X;
	}
	if (m_position.Y - s_textureOrigin.Y < TOP)
	{
		m_position.Y = TOP + s_textureOrigin.Y;
	}
	if (m_position.Y + s_textureOrigin.Y > BOTTOM)
	{
		m_position.Y = BOTTOM - s_textureOrigin.Y;
	}
}
