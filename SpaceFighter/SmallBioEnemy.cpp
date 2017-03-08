/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14

					 
 SmallBioEnemy.cpp: Source file for the small enemy
 bio-mechanical ship.

------------------------------------------------- */


#include <iostream>

#include "SmallBioEnemy.h"

ALLEGRO_BITMAP *SmallBioEnemy::s_pTexture = nullptr;
Vector2 SmallBioEnemy::s_textureOrigin = Vector2::Zero();

SmallBioEnemy::SmallBioEnemy()
{
	// Set starting attributes
	m_position.X = Game::GetScreenWidth() / 2;
	m_position.Y = -100.0f;

	m_hitPoints = 1;

	m_speed = 200.0f;
	m_collisionRadius = 20.0f;
}

void SmallBioEnemy::SetTexture(std::string assetPath)
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

void SmallBioEnemy::Update(const GameTime *pGameTime)
{
	if (IsActive())
	{
		m_position.Y += 1;

		if (m_position.Y - s_textureOrigin.Y > Game::GetScreenHeight())
		{
			Deactivate();
		}
	}

	EnemyShip::Update(pGameTime);
}

void SmallBioEnemy::Draw(const GameTime *pGameTime)
{
	if (s_pTexture)
	{
		int x = (int)(m_position.X - s_textureOrigin.X);
		int y = (int)(m_position.Y - s_textureOrigin.Y);

		al_draw_bitmap(s_pTexture, x, y, 0);
	}
}

