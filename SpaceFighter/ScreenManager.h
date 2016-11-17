/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 ScreenManager.h: Header file for screen
 management.

------------------------------------------------- */


#pragma once

#include <vector>

#include "Screen.h"
#include "GameTime.h"
#include "InputState.h"

// Forward Declarations
class Game;

class ScreenManager
{
	friend class Game;

public:

	ScreenManager(Game *pGame);
	~ScreenManager();

	bool InTransition() const { return false; }

	Game* GetGame() { return m_pGame; }

	virtual void AddScreen(Screen *pScreen);


protected:

	Game *m_pGame;

	std::vector<Screen *> m_screens;


private:

	std::vector<int> m_removeIndices;

	virtual void HandleInput(InputState *pInput);

	virtual void Update(const GameTime *pGameTime);

	virtual void Draw(const GameTime *pGameTime);

};