/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14

					 
 Ship.cpp: Source file for the base ship class.

------------------------------------------------- */


#include "Ship.h"

Ship::Ship()
{
	// Set starting attributes
	m_position.X = Game::GetScreenWidth() / 2;
	m_position.Y = -100.0f;

	m_speed = 250.0f;
	m_collisionRadius = 10.0f;
	m_gunOffset.Set(0.0f, -30.0f);

	m_baseHitPoints = 3.0f;

	m_pBullets = nullptr;
	m_pBullets2 = nullptr;

	m_isInvulnurable = false;

	Initialize();
}

void Ship::Update(const GameTime *pGameTime)
{
	GameObject::Update(pGameTime);
}

Bullet *Ship::GetInactiveBullet()
{
	if (m_pBullets)
	{
		for (unsigned int i = 0; i < m_pBullets->size(); i++)
		{
			if (!(*m_pBullets)[i]->IsActive())
			{
				return (*m_pBullets)[i];
			}
		}
	}

	return nullptr;
}

Bullet2 *Ship::GetInactiveBullet2()
{
	if (m_pBullets2)
	{
		for (unsigned int i = 0; i < m_pBullets2->size(); i++)
		{
			if (!(*m_pBullets2)[i]->IsActive())
			{
				return (*m_pBullets2)[i];
			}
		}
	}

	return nullptr;
}

void Ship::Hit(const float damage)
{
	if (!m_isInvulnurable)
	{
 		m_hitPoints -= damage;

		if (m_hitPoints <= 0)
		{
			GameObject::Deactivate();
		}
	}
}

void Ship::Initialize()
{
	m_hitPoints = m_baseHitPoints;
}
