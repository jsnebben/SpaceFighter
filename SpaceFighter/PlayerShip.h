/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14

					 
 PlayerShip.h: Header file for the player's ship.

------------------------------------------------- */


#pragma once

#include "Ship.h"

/// <summary>Class for the player controlled ship.</summary>
class PlayerShip : public Ship
{

public:	

	PlayerShip();
	virtual ~PlayerShip() { }


	/// <summary>Sets static texture for the player ship.
	/// <param name="assetPath">The location of the asset within the content folder.</param>
	/// </summary>
	static void SetTexture(std::string assetPath);

	/// <summary>Used to manage what the player ship should do based on the user input.
	/// <param name="pInput">A pointer to the input state.</param>
	/// </summary>
	virtual void HandleInput(InputState *pInput);

	/// <summary>Used to update the player ship.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	/// </summary>
	virtual void Update(const GameTime *pGameTime);

	/// <summary>Used to reneder the player ship.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	/// </summary>
	virtual void Draw(const GameTime *pGameTime);

	/// <summary>Used to make the player ship fire it's weapon.</summary>
	virtual void Fire();
	virtual void Fire2();
	
	///<summary>Used to indicate if the player ship is ready to fire.
	/// <returns>True if the ship is ready to fire, false otherwise.</returns>
	/// </summary>
	virtual bool CanFire() { return (m_coolDownTime == 0); }

	/// <summary>Gets a string representation of the game object.
	/// <returns>The game object's string representation.</returns>
	/// </summary>
	virtual std::string ToString() const { return "PlayerShip"; }

	/// <summary>Gets the half-width and half-height of the game object.
	/// <returns>The half dimensions of the game object.</returns>
	/// </summary>
	virtual Vector2 GetHalfDimensions() const { return s_textureOrigin; }
	

protected:

	virtual void SetDesiredDirection(const Vector2 direction) { m_desiredDirection.Set(direction); }
	

private:

	static ALLEGRO_BITMAP *s_pTexture;
	static Vector2 s_textureOrigin;

	double m_coolDownTime;
	double m_maxCoolDownTime;

	Vector2 m_desiredDirection;
	Vector2 m_velocity;
	
	virtual void ConfineToScreen();

};