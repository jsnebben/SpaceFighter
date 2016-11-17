/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 Game.h: Header file for the game.

------------------------------------------------- */


#pragma once

#include <allegro5\allegro.h>

#include "GameTime.h"
#include "ScreenManager.h"

class Game
{
public:

	Game();
	virtual ~Game() { }
	
	static bool IsFullScreen() { return false; }
	static int GetScreenWidth() { return 1280; }
	static int GetScreenHeight() { return 720; }

	static std::string GetContentDirectory() { return s_contentDirectory; }

	virtual void LoadContent();

	virtual void Update();

	virtual void Draw();

	bool IsExiting() const { return m_isExiting; }

	bool IsContentLoaded() const { return m_isContentLoaded; }

	ScreenManager *GetScreenManager() const { return m_pScreenManager; }

	void Exit() { m_isExiting = true; }

	InputState &GetInputState() { return m_input; }

protected:

	bool m_isExiting;
	bool m_isContentLoaded;

private:

	static std::string s_contentDirectory;
	static ALLEGRO_DISPLAY_MODE s_displayMode;

	GameTime m_gameTime;
	InputState m_input;

	ScreenManager *m_pScreenManager = nullptr;

	void SetContentPath(const char *pFolder);
};
