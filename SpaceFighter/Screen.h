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

class Screen
{
public:	

	Screen();
	virtual ~Screen() { }


	void (*OnExit)();

	void (*OnRemove)();


	virtual void LoadContent() { m_isContentLoaded = true; }

	virtual void UnloadContent() { m_isContentLoaded = false; }

	virtual void HandleInput(InputState *pInput) { }

	virtual void Update(const GameTime *pGameTime) { }

	virtual void Draw(const GameTime *pGameTime);

	virtual void UpdateTransition(const GameTime *pGameTime);

	virtual bool IsPopup() const { return m_isPopup; }

	virtual bool IsExiting() const { return m_isExiting; }

	virtual bool IsContentLoaded() const { return m_isContentLoaded; }

	virtual bool NeedsToBeRemoved() const { return m_needsToBeRemoved; }

	float GetAlpha() const { return m_transitionValue; }

	ScreenManager *GetScreenManager() { return m_pScreenManager; }

	void SetScreenManager(ScreenManager *pScreenManager);

	void Show();
	
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

};