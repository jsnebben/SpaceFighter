/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14

					 
 EnemyShip.h: Header file for the enemy ships.

------------------------------------------------- */


#pragma once

#include "Ship.h"

/// <summary>Abstract class for all enemy ships.</summary>
class EnemyShip : public Ship
{
public:	

	EnemyShip();
	virtual ~EnemyShip() { }

	virtual void Update(const GameTime *pGameTime);

	/// <summary>Used to reneder the enemy.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	/// </summary>
	virtual void Draw(const GameTime *pGameTime) = 0;

	/// <summary>Initializes the enemy ship.
	/// <param name="position">Position where the enemy ship will start from.</param>
	/// <param name="delaySeconds">Time that the enemy will wait before becoming active.</param>
	/// </summary>
	virtual void Initialize(const Vector2 position, const double delaySeconds);

	/// <summary>Used to make the enemy ship fire it's weapon.</summary>
	virtual void Fire();

	/// <summary>Gets the time that an enemy should wait off screen, before activating.
	/// <returns>The time in seconds that the enemy will delay before activating.</returns>
	/// </summary>
	virtual double GetDelaySeconds() const { return m_delaySeconds; }

	/// <summary>Gets a string representation of the game object.
	/// <returns>The game object's string representation.</returns>
	/// </summary>
	virtual std::string ToString() const { return "EnemyShip"; }


private:

	double m_delaySeconds;

};