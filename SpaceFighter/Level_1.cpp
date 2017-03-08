/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 Level.cpp: Source file for game levels.

------------------------------------------------- */


#include <time.h> // for random seed

#include "Level_1.h"

Level_1::Level_1()
{
	srand(time(nullptr)); // initialize random seed
}

void Level_1::InitializeEnemies()
{
	for (unsigned int i = 0; i < NUM_SMALLBIOENEMIES; i++)
	{
		ResetEnemy(&m_smallBios[i]);
		AddGameObject(&m_smallBios[i]);
	}
}

void Level_1::Update(const GameTime *pGameTime)
{
	Level::Update(pGameTime);

	for (unsigned int i = 0; i < NUM_SMALLBIOENEMIES; i++)
	{
		if (!m_smallBios[i].IsActive() && m_smallBios[i].GetDelaySeconds() <= 0)
		{
			ResetEnemy(&m_smallBios[i]);
		}
	}
}

void Level_1::ResetEnemy(EnemyShip *enemy)
{
	int x = (rand() % (Game::GetScreenWidth() - 100)) + 50;
	int delay = (rand() % 10) + 5; // 5 - 15 second delay
	Vector2 position(x, -50);

	enemy->Initialize(position, delay);
}
