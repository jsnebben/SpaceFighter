/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 InputState.cpp: Source file for checking the
 current input state.

------------------------------------------------- */


#pragma once

#include <allegro5\allegro.h>

#include <map>

#include "GamePadState.h"

class InputState
{
	friend class Game;

public:

	static const int MAX_NUM_GAMEPADSTATES = 4;

	InputState();
	~InputState() { }

	bool IsKeyDown(int const key) const;
	bool IsKeyUp(int const key) const;
	bool IsNewKeyPress(int const key) const;

	bool IsButtonUp(Buttons button, int &indexOut, int controllingIndex = -1);
	bool IsButtonDown(Buttons button, int &indexOut, int controllingIndex = -1);
	bool IsNewButtonPress(Buttons button, int &indexOut, int controllingIndex = -1);
	
	void UpdateConfigurationEvent();
	void UpdateAxisEvent(ALLEGRO_EVENT alEvent);
	void UpdateButtonEvent(ALLEGRO_EVENT alEvent, ButtonState state);

	int GetGamePadIndex(ALLEGRO_JOYSTICK *pId);

	GamePadState &GetGamePadState(int const gamePadIndex);
		

private:

	ALLEGRO_KEYBOARD_STATE m_currentKeyboardState;
	ALLEGRO_KEYBOARD_STATE m_previousKeyboardState;

	GamePadState m_currentGamePadStates[MAX_NUM_GAMEPADSTATES];
	GamePadState m_previousGamePadStates[MAX_NUM_GAMEPADSTATES];

	std::map<ALLEGRO_JOYSTICK *, int> m_map;

	void Update();

	void InitializeGamePads();

};
