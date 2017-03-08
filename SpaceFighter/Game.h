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

/// <summary>Container for the core game components, including:
/// Timing Values (GameTime), Screen Management (ScreenManager),
/// and Input Management (InputState).
/// </summary>
class Game
{
public:
	
	Game();
	virtual ~Game() { }

	/// <summary>Used to indicate if the game should run in full-screen mode
	/// <returns>True if the game is running full-screen and False if in windowed mode</returns>
	/// </summary>
	static bool IsFullScreen() { return false; }

	/// <summary>Used to indicate the preferred screen width.
	/// <returns>The screen width in pixels.</returns>
	/// </summary>
	static int GetScreenWidth() { return 1280; }

	/// <summary>Used to indicate the preferred screen height.
	/// <returns>The screen height in pixels.</returns>
	/// </summary>
	static int GetScreenHeight() { return 720; }

	/// <summary>Used to retrieve a game assets full path.
	/// <returns>The path where game assets are stored within the content directory.</returns>
	/// <param name="assetPath">The relative path to the asset.</param>
	/// </summary>
	static std::string GetContentPath(std::string assetPath);

	/// <summary>Used to load the game's content.</summary>
	virtual void LoadContent();

	/// <summary>Used to update the game.</summary>
	virtual void Update();

	/// <summary>Used to render the game.</summary>
	virtual void Draw();

	/// <summary>Used to indicate if the game is exiting.
	/// <returns>True if the game is exiting, false otherwise.</returns>
	/// </summary>
	bool IsExiting() const { return m_isExiting; }

	/// <summary>Used to indicate if the game's content has been loaded.
	/// <returns>True if the game's content has been loaded, false otherwise.</returns>
	/// </summary>
	bool IsContentLoaded() const { return m_isContentLoaded; }

	/// <summary>Used to retrieve a pointer to the game's screen manager.
	/// <returns>A pointer to the screen manager.</returns>
	/// </summary>
	ScreenManager *GetScreenManager() const { return m_pScreenManager; }

	/// <summary>Used to exit the game and quit the application.</summary>
	void Exit() { m_isExiting = true; }

	/// <summary>Used to retrieve a reference to the game's input data.
	/// <returns>A reference to the game's input state.</returns>
	/// </summary>
	InputState &GetInputState() { return m_input; }
	

private:

	static std::string s_contentDirectory;
	static ALLEGRO_DISPLAY_MODE s_displayMode;

	bool m_isExiting;

	bool m_isContentLoaded;

	GameTime m_gameTime;
	InputState m_input;

	ScreenManager *m_pScreenManager = nullptr;

	void SetContentPath(const char *pFolder);
};
