/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 GameObject.h: Header file for all game objects.

------------------------------------------------- */


#pragma once

#include "GameTime.h"
#include "Vector2.h"
#include "Game.h"

class Level;


/// <summary>Abstract base class for all game objects.</summary>
class GameObject
{
	friend class Game;

public:
	
	struct CollisionData
	{
		bool removeObject1;
		bool removeObject2;
	};


	GameObject();
	virtual ~GameObject() { }

	/// <summary>Sets a static reference to the currently loaded level.
	/// <returns>A pointer to the current level object.</returns>
	/// </summary>
	static void SetCurrentLevel(Level *pLevel) { s_pCurrentLevel = pLevel; }

	/// <summary>Used to determine if two game objects are colliding.
	/// <param name="gameObject1">A pointer to the first game object.</param>
	/// <param name="gameObject2">A pointer to the second game object.</param>
	/// <param name="pGameTime">A pointer to the collision data struct which contains
	/// details about the collision.</param>
	/// <returns>True if the game objects are colliding, false otherwise.</returns>
	/// </summary>
	static bool AreObjectsColliding(GameObject *gameObject1, GameObject *gameObject2, CollisionData *data);

	/// <summary>Used to update the game object.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	/// </summary>
	virtual void Update(const GameTime *pGameTime);

	/// <summary>Used to reneder the game object.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	/// </summary>
	virtual void Draw(const GameTime *pGameTime) = 0;
	
	/// <summary>Used to indicate if the game object is active.
	/// <returns>True if the game object is active, false otherwise.</returns>
	/// </summary>
	virtual bool IsActive() const { return m_isActive; }

	/// <summary>Activates the game object.</summary>
	virtual void Activate() { m_isActive = true; }

	/// <summary>Deactivates the game object.</summary>
	virtual void Deactivate() { m_isActive = false; }

	/// <summary>Gets a reference to the game object's position.</summary>
	virtual Vector2 &GetPosition() { return m_position; }

	/// <summary>Gets a string representation of the game object.
	/// <returns>The game object's string representation.</returns>
	/// </summary>
	virtual std::string ToString() const { return "GameObject"; }

	/// <summary>Gets the half-width and half-height of the game object.
	/// <returns>The half dimensions of the game object.</returns>
	/// </summary>
	virtual Vector2 GetHalfDimensions() const { return Vector2(); }

	/// <summary>Gets the index of the game object for debugging purposes.
	/// <returns>The game object's index.</returns>
	/// </summary>
	virtual int GetIndex() const { return m_index; }
	

protected:

	static Level *s_pCurrentLevel;

	static int s_count;

	int m_index;

	bool m_isActive;

	Vector2 m_position;

	float m_collisionRadius;

	
private:

	static void ResetCollisionData(CollisionData *pData);

};