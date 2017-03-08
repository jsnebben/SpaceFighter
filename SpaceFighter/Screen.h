/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 Screen.h: Header file for game screens.

------------------------------------------------- */


#pragma once

#include "GameTime.h"
#include "InputState.h"

// Forward Declarations
class ScreenManager;

/// <summary>Abstract base class for all screens.</summary>
class Screen
{
	friend class ScreenManager;

public:	

	Screen();
	virtual ~Screen() { }


	// Callback functions
	void (*OnExit)();

	void (*OnRemove)();


	/// <summary>Used to load the screen's content.</summary>
	virtual void LoadContent() { m_isContentLoaded = true; }

	/// <summary>Used to unload the screen's content.</summary>
	virtual void UnloadContent() { m_isContentLoaded = false; }

	/// <summary>Used to manage what the screen should do based on the user input.
	/// <param name="pInput">A pointer to the input state.</param>
	/// </summary>
	virtual void HandleInput(InputState *pInput) { }

	/// <summary>Used to update the screen.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	/// </summary>
	virtual void Update(const GameTime *pGameTime) { }

	/// <summary>Used to reneder the screen.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	/// </summary>
	virtual void Draw(const GameTime *pGameTime) { }

	/// <summary>Used to update the screen's transition values.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	/// </summary>
	virtual void UpdateTransition(const GameTime *pGameTime);

	/// <summary>Used to indicate if the screen has translucency, and the screen below it should
	/// render.
	/// <returns>True if the screen is translucent or has transparency, false otherwise.</returns>
	/// </summary>
	virtual bool IsPopup() const { return m_isPopup; }

	/// <summary>Used to indicate if the screen is exiting.
	/// <returns>True if the screen is exiting, false otherwise.</returns>
	/// </summary>
	virtual bool IsExiting() const { return m_isExiting; }

	/// <summary>Used to indicate if the screen's content has been loaded.
	/// <returns>True if the screen's content has been loaded, false otherwise.</returns>
	/// </summary>
	virtual bool IsContentLoaded() const { return m_isContentLoaded; }

	/// <summary>Used to indicate if the screen should be removed from the screen manager,
	/// because it has fully exited.
	/// <returns>True if the screen's content has been loaded, false otherwise.</returns>
	/// </summary>
	virtual bool NeedsToBeRemoved() const { return m_needsToBeRemoved; }

	/// <summary>Used to indicate the screen's transparency, based on the transition state
	/// <returns>A value between 0.0 and 1.0</returns>
	/// </summary>
	float GetAlpha() const { return m_transitionValue; }

	/// <summary>Used to retrieve a pointer to the game's screen manager.
	/// <returns>A pointer to the screen manager.</returns>
	/// </summary>
	ScreenManager *GetScreenManager() { return m_pScreenManager; }

	/// <summary>Used to show the screen.</summary>
	void Show();

	/// <summary>Used to exit the screen.</summary>
	void Exit();


protected:

	enum { SCREENTRANS_NONE, SCREENTRANS_FADEIN, SCREENTRANS_FADEOUT };

	bool m_isPopup;
	bool m_isExiting;

	ScreenManager *m_pScreenManager;

	void SetFadeInTime(double time) { m_fadeInTime = time; }
	void SetFadeOutTime(double time) { m_fadeOutTime = time; }
	
	int GetTransition() const { return m_transition; }


private:
	
	bool m_needsToBeRemoved;
	bool m_isContentLoaded;

	double m_fadeInTime;
	double m_fadeOutTime;

	double m_transitionTime;

	int m_transition;

	float m_transitionValue;

	void FadeIn();
	void FadeOut();

	void SetScreenManager(ScreenManager *pScreenManager);

};