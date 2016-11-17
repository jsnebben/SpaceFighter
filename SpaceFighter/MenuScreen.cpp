/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 MenuScreen.cpp: Source file for menu screens.

------------------------------------------------- */


#include "MenuScreen.h"
#include "Game.h"


MenuScreen::MenuScreen()
{
	m_selectedItemIndex = 0;
	m_itemListWraps = true;
}

void MenuScreen::HandleInput(InputState *pInput)
{
	if (m_menuItems.size() > 0)
	{
		int playerIndexOut;

		if (pInput->IsNewKeyPress(ALLEGRO_KEY_ENTER))
		{
			m_menuItems[m_selectedItemIndex].Select(this);
		}

		const int FIRST_INDEX = 0;
		const int LAST_INDEX = m_menuItems.size() - 1;

		if (pInput->IsNewKeyPress(ALLEGRO_KEY_UP) ||
			pInput->IsNewButtonPress(BUTTON_DPADUP, playerIndexOut))
		{
			m_selectedItemIndex--;

			if (m_selectedItemIndex >= m_menuItems.size())
			{
				m_selectedItemIndex = (m_itemListWraps) ? LAST_INDEX : FIRST_INDEX;
			}
		}
		else if (pInput->IsNewKeyPress(ALLEGRO_KEY_DOWN) ||
			pInput->IsNewButtonPress(BUTTON_DPADDOWN, playerIndexOut))
		{
			m_selectedItemIndex++;

			if (m_selectedItemIndex >= m_menuItems.size())
			{
				m_selectedItemIndex = (m_itemListWraps) ? FIRST_INDEX : LAST_INDEX;
			}
		}
	}
}

void MenuScreen::Update(const GameTime *pGameTime)
{
	for (unsigned int i = 0; i < m_menuItems.size(); i++)
	{
		m_menuItems[i].SetSelected(i == m_selectedItemIndex);
		m_menuItems[i].Update(pGameTime);
	}
}

void MenuScreen::Draw(const GameTime *pGameTime)
{
	for (unsigned int i = 0; i < m_menuItems.size(); i++)
	{
		m_menuItems[i].Draw(pGameTime);
	}
}