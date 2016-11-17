/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 GameplayScreen.h: Header file for the game's
 main events.

------------------------------------------------- */


#pragma once

#include <vector>

#include "ScreenManager.h"
#include "Level.h"

class GameplayScreen : public Screen
{

public:

	GameplayScreen();
	virtual ~GameplayScreen();

	virtual void LoadContent();

	virtual void UnloadContent();

	virtual void HandleInput(InputState *pInput);

	virtual void Update(const GameTime *pGameTime);

	virtual void Draw(const GameTime *pGameTime);


protected:

	Level *m_pLevel = nullptr;

};