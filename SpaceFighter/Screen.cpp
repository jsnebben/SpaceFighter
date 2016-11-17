/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 Screen.h: Header file for game screens.

------------------------------------------------- */


#include "Screen.h"

#include "ScreenManager.h"
#include "Game.h"

Screen::Screen()
{
	m_isPopup = false;
	m_isExiting = false;
	m_isContentLoaded = false;
	m_needsToBeRemoved = false;

	m_fadeInTime = 0.0;
	m_fadeOutTime = 0.0;

	m_pScreenManager = nullptr;

	m_transition = SCREENTRANS_NONE;

	m_transitionValue = 0.0f;

	OnExit = nullptr;
	OnRemove = nullptr;
}

void Screen::UpdateTransition(const GameTime *pGameTime)
{
	if (m_transition != SCREENTRANS_NONE)
	{
		m_transitionTime -= pGameTime->GetTimeElapsed();

		if (m_transition == SCREENTRANS_FADEIN)
		{
			if (m_fadeInTime > 0)
			{
				m_transitionValue = 1 - (float)m_transitionTime / (float)m_fadeInTime;
			}
			else
			{
				m_transitionValue = 0;
			}
		}
		
		if (m_transition == SCREENTRANS_FADEOUT)
		{
			if (m_fadeOutTime > 0)
			{
				m_transitionValue = (float)m_transitionTime / (float)m_fadeOutTime;
			}
			else
			{
				m_transitionValue = 0;
			}
		}

		if (m_transitionValue < 0) m_transitionValue = 0;
		if (m_transitionValue > 1) m_transitionValue = 1;
		
		if (m_transitionTime <= 0)
		{
			m_transitionTime = 0;
			m_transition = SCREENTRANS_NONE;

			if (m_isExiting)
			{
				m_needsToBeRemoved = true;
			}
		}
	}
}

void Screen::Draw(const GameTime *pGameTime)
{ }

void Screen::SetScreenManager(ScreenManager *pScreenManager)
{
	m_pScreenManager = pScreenManager;
}

void Screen::Show()
{
	FadeIn();
}

void Screen::Exit()
{
	m_isExiting = true;

	FadeOut();
	
	if (OnExit)	OnExit();
}

void Screen::FadeIn()
{
	if (m_transition == SCREENTRANS_NONE)
	{
		m_transitionTime = m_fadeInTime;
		m_transition = SCREENTRANS_FADEIN;
	}
}

void Screen::FadeOut()
{
	if (m_transition == SCREENTRANS_NONE)
	{
		m_transitionTime = m_fadeOutTime;
		m_transition = SCREENTRANS_FADEOUT;
	}
}