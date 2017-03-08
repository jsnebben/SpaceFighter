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


/// <summary>Class that contains the state of various player input
/// devices. Currently the keyboard, and up to four game pads.
/// </summary>
class InputState
{
	friend class Game;

public:

	static const int MAX_NUM_GAMEPADSTATES = 4;

	InputState();
	~InputState() { }

	
	/// <summary>Used to indicate if a key is being held down.
	/// <param name="key">The key to test.</param>
	/// <returns>True if the key is down, false otherwise.</returns>
	/// </summary>
	bool IsKeyDown(int const key) const;

	/// <summary>Used to indicate if a key is not being held down.
	/// <param name="key">The key to test.</param>
	/// <returns>True if the key is up, false otherwise.</returns>
	/// </summary>
	bool IsKeyUp(int const key) const;

	/// <summary>Used to indicate if a key has just been released.
	/// <param name="key">The key to test.</param>
	/// <returns>True if the key was just released, false otherwise.</returns>
	/// </summary>
	bool IsNewKeyPress(int const key) const;


	/// <summary>Used to indicate if a button is being held down.
	/// <param name="button">The button to test.</param>
	/// <param name="indexOut">A reference to the controller who's button was held down.</param>
	/// <param name="controllingIndex">The controller index (0-3) to test. Use -1 to test all
	/// controllers</param>
	/// <returns>True if the button is down, false otherwise.</returns>
	/// </summary>
	bool IsButtonDown(Buttons button, int &indexOut, int controllingIndex = -1);

	/// <summary>Used to indicate if a button is not being pressed.
	/// <param name="button">The button to test.</param>
	/// <param name="indexOut">A reference to the controller who's button was up.</param>
	/// <param name="controllingIndex">The controller index (0-3) to test. Use -1 to test all
	/// controllers</param>
	/// <returns>True if the button is up, false otherwise.</returns>
	/// </summary>
	bool IsButtonUp(Buttons button, int &indexOut, int controllingIndex = -1);

	/// <summary>Used to indicate if a button has just been released.
	/// <param name="button">The button to test.</param>
	/// <param name="indexOut">A reference to the controller who's button was just
	/// released.</param>
	/// <param name="controllingIndex">The controller index (0-3) to test. Use -1 to test all
	/// controllers</param>
	/// <returns>True if the button was just released, false otherwise.</returns>
	/// </summary>
	bool IsNewButtonPress(Buttons button, int &indexOut, int controllingIndex = -1);
	

	/// <summary>Handles updating the gamepad configuration.</summary>
	void UpdateConfigurationEvent();

	/// <summary>Handles updating the gamepad axies.</summary>
	void UpdateAxisEvent(ALLEGRO_EVENT alEvent);

	/// <summary>Handles updating the gamepad axies.</summary>
	void UpdateButtonEvent(ALLEGRO_EVENT alEvent, ButtonState state);


	/// <summary>Gets the index of a game pad.
	/// <param name="pId">The allegro joystick id.</param>
	/// <returns>The index of a game pad.</returns>
	/// </summary>
	int GetGamePadIndex(ALLEGRO_JOYSTICK *pId);

	/// <summary>Gets a reference to a specific game pad.
	/// <param name="gamePadIndex">The index of the game pad.</param>
	/// <returns>The reference to the indexed game pad.</returns>
	/// </summary>
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
