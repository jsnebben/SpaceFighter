/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 ScreenManager.cpp: Source file for screen
 management.

------------------------------------------------- */


#include <allegro5\allegro.h>
#include <allegro5\allegro_font.h>
#include <allegro5\allegro_ttf.h>

#include <algorithm>

#include "ScreenManager.h"

#include "Game.h"


ScreenManager::ScreenManager(Game *pGame)
{
	m_pGame = pGame;
}

ScreenManager::~ScreenManager()
{ }

void ScreenManager::HandleInput(InputState *pInput)
{
	unsigned int size = m_screens.size();

	if (size > 0)
	{
		m_screens[size - 1]->HandleInput(pInput);
	}
}

void ScreenManager::Update(const GameTime *pGameTime)
{
	if (m_screens.size() > 0)
	{
		m_removeIndices.clear();

		bool updateScreen = true;

		std::vector<Screen *>::iterator iterator;
		for (int i = m_screens.size(); i > 0; i--)
		{
			int index = i - 1;

			m_screens[index]->UpdateTransition(pGameTime);

			if (m_screens[index]->NeedsToBeRemoved())
			{
				m_removeIndices.push_back(index);

				if (m_screens[index]->OnRemove) m_screens[index]->OnRemove();
			}
			else
			{
				if (updateScreen)
				{
					m_screens[index]->Update(pGameTime);

					updateScreen = (m_screens[index]->IsPopup());
				}
			}
		}

		std::vector<int>::iterator itRemove;
		for (itRemove = m_removeIndices.begin(); itRemove != m_removeIndices.end(); ++itRemove)
		{
			m_screens.erase(m_screens.begin() + (*itRemove));
		}
	}
}

void ScreenManager::Draw(const GameTime *pGameTime)
{
	std::vector<Screen *>::iterator itScreens;
	for (itScreens = m_screens.begin(); itScreens != m_screens.end(); ++itScreens)
	{
		Screen *pScreen = *itScreens;

		if (pScreen->IsContentLoaded())
		{
			pScreen->Draw(pGameTime);
		}
	}
}

void ScreenManager::AddScreen(Screen *pScreen)
{
	pScreen->LoadContent();
	
	pScreen->SetScreenManager(this);

	m_screens.push_back(pScreen);
}