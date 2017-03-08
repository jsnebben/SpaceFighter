/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14

					 
 SmallBioEnemy.h: Header file for the small enemy
 bio-mechanical ship.

------------------------------------------------- */


#pragma once

#include "EnemyShip.h"


/// <summary>Class for small bio enemies.</summary>
class SmallBioEnemy : public EnemyShip
{

public:	

	SmallBioEnemy();
	virtual ~SmallBioEnemy() { }


	/// <summary>Sets the shared texture of all SmallBioEnemys.
	/// <param name="assetPath">The location of the asset within the content folder.</param>
	/// </summary>
	static void SetTexture(std::string assetPath);

	/// <summary>Used to update the enemy.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	/// </summary>
	virtual void Update(const GameTime *pGameTime);

	/// <summary>Used to reneder the enemy.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	/// </summary>
	virtual void Draw(const GameTime *pGameTime);

	/// <summary>Gets a string representation of the game object.
	/// <returns>The game object's string representation.</returns>
	/// </summary>
	virtual std::string ToString() const { return "SmallBioEnemy"; }

	/// <summary>Gets the half-width and half-height of the game object.
	/// <returns>The half dimensions of the game object.</returns>
	/// </summary>
	virtual Vector2 GetHalfDimensions() const { return s_textureOrigin; }
	

private:

	static ALLEGRO_BITMAP *s_pTexture;
	static Vector2 s_textureOrigin;

};