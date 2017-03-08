/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 10/2/14


 PauseScreen.h: Header file for the pause screen.

------------------------------------------------- */


#pragma once

#include <allegro5\allegro_font.h>
#include <allegro5\allegro_ttf.h>

#include "Screen.h"


/// <summary>Class for the pause screen.</summary>
class PauseScreen : public Screen
{

public:

	PauseScreen();
	virtual ~PauseScreen() { }
	
	/// <summary>Used to manage what the screen should do based on the user input.
	/// <param name="pInput">A pointer to the input state.</param>
	/// </summary>
	virtual void HandleInput(InputState *pInput);
	
	/// <summary>Used to reneder the screen.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	/// </summary>
	virtual void Draw(const GameTime *pGameTime);


protected:

	ALLEGRO_FONT *m_pFont = nullptr;

};
