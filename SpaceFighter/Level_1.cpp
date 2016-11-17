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

	for (unsigned int i = 0; i < NUM_ENEMYBIOSMALL; i++)
	{
		ResetEnemy(&m_bioSmalls[i]);
		AddGameObject(&m_bioSmalls[i]);
	}
}

void Level_1::Update(const GameTime *pGameTime)
{
	Level::Update(pGameTime);

	for (unsigned int i = 0; i < NUM_ENEMYBIOSMALL; i++)
	{
		if (!m_bioSmalls[i].IsActive() && m_bioSmalls[i].GetDelaySeconds() <= 0)
		{
			ResetEnemy(&m_bioSmalls[i]);
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
