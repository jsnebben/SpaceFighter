/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 10/2/14

					 
 MainMenuScreen.h: Header file for game's main
 menu.

------------------------------------------------- */


#pragma once

#include "MenuScreen.h"


/// <summary>Class for the game's main menu</summary>
class MainMenuScreen : public MenuScreen
{

public:

	MainMenuScreen();
	virtual ~MainMenuScreen() { }


	/// <summary>Used to load the menu's content.</summary>
	virtual void LoadContent();

	/// <summary>Used to update the menu.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	/// </summary>
	virtual void Update(const GameTime *pGameTime);

	/// <summary>Used to render the menu.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	/// </summary>
	virtual void Draw(const GameTime *pGameTime);


private:

	ALLEGRO_COLOR m_selectedColor;
	ALLEGRO_COLOR m_unselectedColor;

	float m_selectedAlpha;

	ALLEGRO_BITMAP *m_pTexture = nullptr;

	Vector2 m_textureOrigin;
	Vector2 m_position;
};