/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/18/14


 Level_1.h: Header file for Level 1.

------------------------------------------------- */


#pragma once

#include "Level.h"
#include "SmallBioEnemy.h"

// Forward Declarations
class Game;

/// <summary>Class for Level 1</summary>
class Level_1 : public Level
{

public:
	
	Level_1();
	virtual ~Level_1() { }


	/// <summary>Used to setup the enemies at the beginning of the level.</summary>
	virtual void InitializeEnemies();

	/// <summary>Used to update the level.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	/// </summary>
	virtual void Update(const GameTime *pGameTime);
	

private:

	static const int NUM_SMALLBIOENEMIES = 5;
	SmallBioEnemy m_smallBios[NUM_SMALLBIOENEMIES];

	void ResetEnemy(EnemyShip *enemy);

};
