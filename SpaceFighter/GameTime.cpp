/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 GameTime.cpp: Source file for tracking the game's
 elapsed and total time.

------------------------------------------------- */


#include <allegro5\allegro.h>

#include "GameTime.h"

GameTime::GameTime()
{
	m_previousTotalTime = al_get_time();
	m_currentTotalTime = al_get_time();
	m_elapsedTime = 0.0;
}

// Updates the timing values
void GameTime::Update()
{
	m_previousTotalTime = m_currentTotalTime;
	m_currentTotalTime = al_get_time();
	m_elapsedTime = (m_currentTotalTime - m_previousTotalTime);
}
