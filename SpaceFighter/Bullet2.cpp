/* ------------------------------------------------

Space Fighter Game

Ryan Appel
9/17/14


Bullet.cpp: Source file for bullets.

------------------------------------------------- */


#include "Bullet2.h"

ALLEGRO_BITMAP *Bullet2::s_pTexture = nullptr;
Vector2 Bullet2::s_textureOrigin = Vector2::Zero();


Bullet2::Bullet2()
{
	// set default properties
	m_speed = 500.0f;
	m_damage = 1.0f;
	m_isActive = false;
	m_collisionRadius = 5.0f;
	m_direction.Set(0.0f, -1.0f);
}

void Bullet2::Update(const GameTime *pGameTime)
{
	if (IsActive())
	{
		m_position += m_direction * m_speed * pGameTime->GetTimeElapsed();

		// Check if bullet is off-screen
		if (m_position.Y < -s_textureOrigin.Y)
		{
			Deactivate();
		}
		//if (m_speed > 250)
		//{
			m_speed *= .985;
		//}
	}

	GameObject::Update(pGameTime);
}

void Bullet2::Draw(const GameTime *pGameTime)
{
	if (s_pTexture)
	{
		int x = (int)(m_position.X - s_textureOrigin.X);
		int y = (int)(m_position.Y - s_textureOrigin.Y);

		al_draw_bitmap(s_pTexture, x, y, 0);
	}
}

void Bullet2::Activate(Vector2 position, bool isShotByPlayer)
{
	GameObject::Activate();
	m_speed = 500;

	m_position.Set(position);

	if (isShotByPlayer)
	{
		float xmag = (((float)rand() / (RAND_MAX)) * 2 - 1) / 2;
		

		m_direction.Set(xmag, sqrt(2.25 - (xmag *xmag)) * -1); // moves upward
	}
}

void Bullet2::SetTexture(std::string assetPath)
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
