/* ------------------------------------------------

Space Fighter Game

Ryan Appel
9/17/14


Bullet.h: Header file for bullets.

------------------------------------------------- */


#pragma once

#include "GameObject.h"
#include "Vector2.h"

/// <summary>Class for bullet2 objects.</summary>
class Bullet2 : public GameObject
{
public:

	Bullet2();

	Bullet2(int directionId) ;

	virtual ~Bullet2() { }

	/// <summary>Sets the shared texture of all bullets.
	/// <param name="assetPath">The location of the asset within the content folder.</param>
	/// </summary>
	static void SetTexture(std::string assetPath);

	/// <summary>Used to update the screen.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	/// </summary>
	virtual void Update(const GameTime *pGameTime);

	/// <summary>Used to reneder the bullet.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	/// </summary>
	virtual void Draw(const GameTime *pGameTime);

	/// <summary>Activates the bullet.
	/// <param name="position">The position where the bullet should start.</param>
	/// <param name="isShotByPlayer">Specifies if the player ship shot the bullet.</param>
	/// </summary>
	virtual void Activate(Vector2 position, bool isShotByPlayer = true);

	/// <summary>Gets the dammage that the bullet inflicts.
	/// <returns>The damage value that the bullet inflicts.</returns>
	/// </summary>
	virtual float GetDamage() const { return m_damage; }

	/// <summary>Gets a string representation of the game object.
	/// <returns>The game object's string representation.</returns>
	/// </summary>
	virtual std::string ToString() const { return "Bullet"; }

protected:

	float m_speed;

	float m_damage;

	Vector2 m_direction;

private:

	static ALLEGRO_BITMAP *s_pTexture;
	static Vector2 s_textureOrigin;

};