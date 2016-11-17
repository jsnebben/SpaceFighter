/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14

					 
 BioEnemySmall.cpp: Source file for the small enemy
 bio-mechanical ship.

------------------------------------------------- */


#include <iostream>

#include "BioEnemySmall.h"

ALLEGRO_BITMAP *BioEnemySmall::s_pTexture = nullptr;
Vector2 BioEnemySmall::s_textureOrigin = Vector2::Zero();

BioEnemySmall::BioEnemySmall()
{
	// Set starting attributes
	m_position.X = Game::GetScreenWidth() / 2;
	m_position.Y = -100.0f;

	m_hitPoints = 1;

	m_speed = 200.0f;
	m_collisionRadius = 20.0f;
}

void BioEnemySmall::SetTexture(std::string assetPath)
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

void BioEnemySmall::Update(const GameTime *pGameTime)
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

void BioEnemySmall::Draw(const GameTime *pGameTime)
{
	if (s_pTexture)
	{
		int x = (int)(m_position.X - s_textureOrigin.X);
		int y = (int)(m_position.Y - s_textureOrigin.Y);

		al_draw_bitmap(s_pTexture, x, y, 0);
	}
}

