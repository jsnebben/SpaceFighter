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


/// <summary>Class for the gameplay screen. Where all of the action takes place!</summary>
class GameplayScreen : public Screen
{

public:

	GameplayScreen();
	virtual ~GameplayScreen();

	/// <summary>Used to load the screen's content.</summary>
	virtual void LoadContent();

	/// <summary>Used to unload the screen's content.</summary>
	virtual void UnloadContent();

	/// <summary>Used to manage what the screen should do based on the user input.
	/// <param name="pInput">A pointer to the input state.</param>
	/// </summary>
	virtual void HandleInput(InputState *pInput);

	/// <summary>Used to update the screen.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	/// </summary>
	virtual void Update(const GameTime *pGameTime);

	/// <summary>Used to reneder the screen.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	/// </summary>
	virtual void Draw(const GameTime *pGameTime);


protected:

	Level *m_pLevel = nullptr;

};