/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 Ship.h: Header file for the base ship class.

------------------------------------------------- */


#pragma once

#include "GameObject.h"
#include "Bullet.h"


/// <summary>Abstract base class for all ships.</summary>
class Ship : public GameObject
{

public:	

	Ship();
	virtual ~Ship() { }


	/// <summary>Used to update the ship.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	/// </summary>
	virtual void Update(const GameTime *pGameTime);

	/// <summary>Used to reneder the ship.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	/// </summary>
	virtual void Draw(const GameTime *pGameTime) = 0;

	/// <summary>Used to make the ship fire it's weapon.</summary>
	virtual void Fire() = 0;

	/// <summary>Sets the pool from where the bullets can be reused, when firing.
	/// <param name="pBullets">A vector of bullet poiners that can be reused.</param>
	/// </summary>
	virtual void SetBulletPool(std::vector<Bullet *> *pBullets) { m_pBullets = pBullets; }

	/// <summary>Used to inflict damage when a ship is hit.
	/// <param name="damage">A the amount of damage to inflict.</param>
	/// </summary>
	virtual void Hit(const float damage);

	/// <summary>Used to indicate if a ship can take damage.
	/// <returns>True if the ship is invulnurable (cannot take damage), false otherwise.</returns>
	/// </summary>
	virtual bool IsInvulnurable() const { return m_isInvulnurable; }

	/// <summary>Gets a string representation of the game object.
	/// <returns>The game object's string representation.</returns>
	/// </summary>
	virtual std::string ToString() const { return "Ship"; }


protected:

	float m_speed;

	float m_hitPoints;

	float m_baseHitPoints;

	bool m_isInvulnurable;

	Vector2 m_gunOffset;

	std::vector<Bullet *> *m_pBullets = nullptr;

	virtual Bullet *GetInactiveBullet();

	virtual void Initialize();
	
};