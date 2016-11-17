/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/18/14


 Level_1.h: Header file for Level 1.

------------------------------------------------- */


#pragma once

#include "Level.h"
#include "BioEnemySmall.h"

// Forward Declarations
class Game;

class Level_1 : public Level
{
public:
	
	Level_1();
	virtual ~Level_1() { }

	virtual void Update(const GameTime *pGameTime);

protected:

private:

	static const int NUM_ENEMYBIOSMALL = 5;
	BioEnemySmall m_bioSmalls[NUM_ENEMYBIOSMALL];

	void ResetEnemy(EnemyShip *enemy);

};
