/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 10/2/14


 MenuItem.h: Header file for menu items.

------------------------------------------------- */


#pragma once

#include <allegro5\allegro_font.h>
#include <allegro5\allegro_ttf.h>

#include <iostream>
#include <string>

#include "GameTime.h"
#include "Vector2.h"

class MenuScreen;

class MenuItem
{

public:

	MenuItem();
	virtual ~MenuItem() { }

	void (*OnSelect)(MenuScreen *menuScreen);
	
	virtual void Update(const GameTime *pGameTime) { }

	virtual void Draw(const GameTime *pGameTime);

	virtual void Select(MenuScreen *pMenuScreen);

	virtual void SetText(const std::string text) { m_text = text; }

	virtual bool IsSelected() const { return m_isSelected; }

	virtual void SetSelected(const bool isSelected) { m_isSelected = isSelected; }

	virtual void SetFont(ALLEGRO_FONT *pFont) { m_pFont = pFont; }

	virtual void SetPosition(const Vector2 position) { m_position = position; }

	virtual void SetColor(const ALLEGRO_COLOR color) { m_color = color; }

	virtual void SetAlpha(const float alpha) { m_alpha = alpha; }

	virtual void SetAlignment(const int allignment) { m_allignment = allignment; }

	virtual void SetMenuScreen(MenuScreen *pMenuScreen) { m_pMenuScreen = pMenuScreen; }

protected:

	std::string m_text;

	bool m_isSelected;

	ALLEGRO_FONT *m_pFont = nullptr;
	ALLEGRO_COLOR m_color;

	int m_allignment;
	float m_alpha;

	Vector2 m_position;

	MenuScreen *m_pMenuScreen = nullptr;

};