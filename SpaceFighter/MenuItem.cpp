/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 10/2/14


 MenuItem.cpp: Source file for menu items.

------------------------------------------------- */


#include "MenuItem.h"
#include "Game.h"


MenuItem::MenuItem()
{
	OnSelect = nullptr;

	std::string path = Game::GetContentPath("Fonts\\arialbd.ttf");
	m_pFont = al_load_ttf_font(path.c_str(), 20, 0);

	m_color = al_map_rgb(255, 255, 255);
	m_alpha = 1.0f;
	m_text = "";
	m_allignment = ALLEGRO_ALIGN_LEFT;
}

void MenuItem::Draw(const GameTime *pGameTime)
{
	m_color.a = m_alpha;

	if (m_pFont && m_text.compare("") != 0)
	{
		al_draw_text(m_pFont, m_color, m_position.X, m_position.Y, m_allignment, m_text.c_str());
	}
}

void MenuItem::Select(MenuScreen *pMenuScreen)
{
	if (OnSelect) OnSelect(pMenuScreen);
}
