/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 GameTime.h: Header file for tracking the game's
 elapsed and total time.

------------------------------------------------- */


#pragma once

#include <allegro5\allegro.h>


/// <summary>Class for managing the game's timing values.</summary>
class GameTime
{
	friend class Game;

public:

	GameTime();
	~GameTime() { }


	/// <summary>Gets the elapsed time since last frame.
	/// <returns>The amount of time, in seconds, since the last frame.</returns>
	/// </summary>
	double GetTimeElapsed() const { return m_elapsedTime; }

	/// <summary>Gets the time since the game started.
	/// <returns>The amount of time, in seconds, since the game started.</returns>
	/// </summary>
	double GetTotalTime() const { return m_currentTotalTime; }


protected:


private:

	void Update();

	double m_currentTotalTime;
	double m_previousTotalTime;
	double m_elapsedTime;
};