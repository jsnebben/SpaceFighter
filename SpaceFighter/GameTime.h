/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 GameTime.h: Header file for tracking the game's
 elapsed and total time.

------------------------------------------------- */


#pragma once

#include <allegro5\allegro.h>

class GameTime
{
	friend class Game;

public:

	GameTime();
	~GameTime() { }

	// Gets the time in seconds since last frame.
	double GetTimeElapsed() const { return m_elapsedTime; }

	// Gets the time in seconds since the game started.
	double GetTotalTime() const { return m_currentTotalTime; }


protected:


private:

	void Update();

	double m_currentTotalTime;
	double m_previousTotalTime;
	double m_elapsedTime;
};