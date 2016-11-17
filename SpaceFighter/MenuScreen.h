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

class MenuScreen : public Screen
{

public:

	MenuScreen();

	virtual void HandleInput(InputState *pInput);

	virtual void Update(const GameTime *pGameTime);

	virtual void Draw(const GameTime *pGameTime);

	virtual void SetItemListWrapping(const bool wraps) { m_itemListWraps = wraps; }


protected:

	std::vector<MenuItem> m_menuItems;

	unsigned int m_selectedItemIndex;

	bool m_itemListWraps;

};
