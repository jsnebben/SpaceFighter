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

class PauseScreen : public Screen
{

public:

	PauseScreen();
	virtual ~PauseScreen() { }

	virtual void HandleInput(InputState *pInput);

	virtual void Draw(const GameTime *pGameTime);


protected:

	ALLEGRO_FONT *m_pFont = nullptr;

};
