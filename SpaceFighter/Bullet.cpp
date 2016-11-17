/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14

					 
 Bullet.cpp: Source file for bullets.

------------------------------------------------- */


#include "Bullet.h"

ALLEGRO_BITMAP *Bullet::s_pTexture = nullptr;
Vector2 Bullet::s_textureOrigin = Vector2::Zero();


Bullet::Bullet()
{
	// set default properties
	m_speed = 500.0f;
	m_damage = 1.0f;
	m_isActive = false;
	m_collisionRadius = 5.0f;
	m_direction.Set(0.0f, -1.0f);
}

void Bullet::Update(const GameTime *pGameTime)
{
	if (IsActive())
	{
		m_position += m_direction * m_speed * pGameTime->GetTimeElapsed();

		// Check if bullet is off-screen
		if (m_position.Y < -s_textureOrigin.Y)
		{
			Deactivate();
		}
	}

	GameObject::Update(pGameTime);
}

void Bullet::Draw(const GameTime *pGameTime)
{
	if (s_pTexture)
	{
		int x = (int)(m_position.X - s_textureOrigin.X);
		int y = (int)(m_position.Y - s_textureOrigin.Y);

		al_draw_bitmap(s_pTexture, x, y, 0);
	}
}

void Bullet::Activate(Vector2 position, bool isShotByPlayer)
{
	GameObject::Activate();

	m_position.Set(position);

	if (isShotByPlayer)
	{
		m_direction.Set(0.0f, -1.0f); // moves upward
	}
}

void Bullet::SetTexture(std::string assetPath)
{
	ALLEGRO_BITMAP *pTemp = nullptr;
	
	std::string path = Game::GetContentDirectory();
	path.append(assetPath);

	pTemp = al_load_bitmap(path.c_str());
	if (pTemp)
	{
		s_pTexture = pTemp;
		s_textureOrigin.X = al_get_bitmap_width(s_pTexture) / 2;
		s_textureOrigin.Y = al_get_bitmap_height(s_pTexture) / 2;
	}
}
