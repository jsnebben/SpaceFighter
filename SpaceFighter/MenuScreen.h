/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 10/2/14


 MenuScreen.h: Header file for menu screens.

------------------------------------------------- */


#pragma once

#include <vector>

#include "Screen.h"
#include "MenuItem.h"


/// <summary>Base class for all menus.</summary>
class MenuScreen : public Screen
{

public:

	MenuScreen();
	virtual ~MenuScreen() { }

	/// <summary>Used to manage what the menu screen should do based on the user input.
	/// <param name="pInput">A pointer to the input state.</param>
	virtual void HandleInput(InputState *pInput);

	virtual void Update(const GameTime *pGameTime);

	/// <summary>Used to reneder the screen.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	virtual void Draw(const GameTime *pGameTime);

	/// <summary>Used to set whether the menu list selection continues from the last item to
	/// the first, and vice versa.
	/// <param name="wraps">True (default) makes the list wrap, and false will not.</param>
	virtual void SetItemListWrapping(const bool wraps = true) { m_itemListWraps = wraps; }


protected:

	std::vector<MenuItem> m_menuItems;

	unsigned int m_selectedItemIndex;

	bool m_itemListWraps;

};
