/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 PauseScreen.cpp: Source file for the pause
 screen.

------------------------------------------------- */


#include "PauseScreen.h"

#include "Game.h"

PauseScreen::PauseScreen()
{
	std::string fontPath = Game::GetContentDirectory();
	fontPath.append("Fonts\\arialbd.ttf");
	m_pFont = al_load_ttf_font(fontPath.c_str(), 20, 0);
}

void PauseScreen::HandleInput(InputState *pInput)
{
	if (pInput->IsNewKeyPress(ALLEGRO_KEY_ESCAPE))
	{
		m_pScreenManager->GetGame()->Exit();
	}

	if (pInput->IsNewKeyPress(ALLEGRO_KEY_ENTER))
	{
		Exit();
	}
}

void PauseScreen::Draw(const GameTime *pGameTime)
{
	if (m_pFont)
	{
		int x = (int)(Game::GetScreenWidth() / 2);
		int y = (int)(Game::GetScreenHeight() / 2);
		ALLEGRO_COLOR color = al_map_rgb(255, 255, 255);
		al_draw_text(m_pFont, color, x, y, ALLEGRO_ALIGN_CENTER, "Paused");
	}
}