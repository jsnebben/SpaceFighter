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

/// <summary>Manages the updating, rendering, and player input for open screens.</summary>
class ScreenManager
{
	friend class Game;

public:

	ScreenManager(Game *pGame);
	~ScreenManager();

	/// <summary>Used to indicate if the game is transitioning between two screens.
	/// <returns>True if the game is transisioning between screens, false otherwise.</returns>
	/// </summary>
	bool InTransition() const { return false; }

	/// <summary>Used to retrieve a pointer to the current game instance.
	/// <returns>A pointer to the currently running game.</returns>
	/// </summary>
	Game* GetGame() { return m_pGame; }

	/// <summary>Used to add a screen to be managed.
	/// <param name="pScreen">A pointer to the screen that you want to be managed.</param>
	/// </summary>
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