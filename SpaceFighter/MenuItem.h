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



/// <summary>Class for selectable menu items.</summary>
class MenuItem
{

	friend class MenuScreen;

public:

	MenuItem();
	virtual ~MenuItem() { }

	// Callback function for when the item is selected
	void (*OnSelect)(MenuScreen *menuScreen);
	

	/// <summary>Used to update the item.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	/// </summary>
	virtual void Update(const GameTime *pGameTime) { }

	/// <summary>Used to draw the item.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	/// </summary>
	virtual void Draw(const GameTime *pGameTime);


	/// <summary>Used to select the item.
	/// <param name="pMenuScreen">A pointer to the menu that the item belongs to.</param>
	/// </summary>
	virtual void Select(MenuScreen *pMenuScreen);

	/// <summary>Sets the display text for the item.
	/// <param name="text">The text that the menu item will display.</param>
	/// </summary>
	virtual void SetText(const std::string text) { m_text = text; }

	/// <summary>Used to indicate if the item is the selected one in the menu.
	/// <returns>True if the item is selected, false otherwise.</returns>
	/// </summary>
	virtual bool IsSelected() const { return m_isSelected; }

	/// <summary>Makes this item the selected one in the containing menu.
	/// <param name="isSelected">Whether or not the item is being set as selected or
	/// unselected.</param>
	/// </summary>
	virtual void SetSelected(const bool isSelected) { m_isSelected = isSelected; }

	/// <summary>Sets the font for the item text.
	/// <param name="pFont">A pointer to the font that the menu item will use to
	/// display the text.</param>
	/// </summary>
	virtual void SetFont(ALLEGRO_FONT *pFont) { m_pFont = pFont; }

	/// <summary>Sets the position for the item text.
	/// <param name="position">The position on the screen that the menu item text will be
	/// rendered.</param>
	/// </summary>
	virtual void SetPosition(const Vector2 position) { m_position = position; }

	/// <summary>Sets the color for the item text.
	/// <param name="color">The color that the menu item text will be rendered.</param>
	/// </summary>
	virtual void SetColor(const ALLEGRO_COLOR color) { m_color = color; }

	/// <summary>Sets the opacity for the item text.
	/// <param name="alpha">The opacity that the menu item text will be rendered.</param>
	/// </summary>
	virtual void SetAlpha(const float alpha) { m_alpha = alpha; }

	/// <summary>Sets the alignment for the item text.
	/// <param name="alpha">The alignment that the menu item text will be rendered.</param>
	/// </summary>
	virtual void SetAlignment(const int allignment) { m_allignment = allignment; }

protected:

	std::string m_text;

	bool m_isSelected;

	ALLEGRO_FONT *m_pFont = nullptr;
	ALLEGRO_COLOR m_color;

	int m_allignment;
	float m_alpha;

	Vector2 m_position;

	MenuScreen *m_pMenuScreen = nullptr;

	virtual void SetMenuScreen(MenuScreen *pMenuScreen) { m_pMenuScreen = pMenuScreen; }

};