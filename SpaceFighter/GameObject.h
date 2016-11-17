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

class GameObject
{
	friend class Game;

public:

	// Tabs here indicate hierarchy
	/*enum ObjectType
	{
		TYPE_OBJECT,
			TYPE_SHIP,
				TYPE_PLAYERSHIP,
				TYPE_ENEMYSHIP,
					TYPE_ENEMYBIOSMALL,
			TYPE_BULLET
	};*/

	struct CollisionData
	{
		bool removeObject1;
		bool removeObject2;
	};


	GameObject();
	virtual ~GameObject() { }

	static void SetCurrentLevel(Level *pLevel) { s_pCurrentLevel = pLevel; }

	static bool AreObjectsColliding(GameObject *gameObject1, GameObject *gameObject2, CollisionData *data);

	virtual void Update(const GameTime *pGameTime);

	virtual void Draw(const GameTime *pGameTime) = 0;
	
	virtual bool IsActive() const { return m_isActive; }

	virtual void Activate() { m_isActive = true; }

	virtual void Deactivate() { m_isActive = false; }

	virtual Vector2 &GetPosition() { return m_position; }

	virtual std::string ToString() const { return "GameObject"; }

	virtual Vector2 GetHalfDimensions() const { return Vector2(); }

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