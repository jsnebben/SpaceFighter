/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 Level.h: Header file for game levels.

------------------------------------------------- */


#pragma once

#include "Vector2.h"

#include "PlayerShip.h"
#include "Bullet.h"

class GameObject;


/// <summary>The abstract base class for all levels.</summary>
class Level
{

public:
	
	Level();
	virtual ~Level();


	/// <summary>Used to get a static pointer to the current level.</summary>
	static Level *GetCurrentLevel() { return s_pCurrentLevel; }

	/// <summary>Used to load the screen's content.</summary>
	virtual void LoadContent();

	/// <summary>Used to unload the screen's content.</summary>
	virtual void UnloadContent() { };

	/// <summary>Used to setup the enemies at the beginning of the level.</summary>
	virtual void InitializeEnemies() = 0;

	/// <summary>Used to manage what the level should do based on the user input.
	/// <param name="pInput">A pointer to the input state.</param>
	/// </summary>
	virtual void HandleInput(InputState *pInput);

	/// <summary>Used to update the level.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	///</summary>
	virtual void Update(const GameTime *pGameTime);

	/// <summary>Used to render the level.
	/// <param name="pGameTime">A pointer to the game's timing values.</param>
	/// </summary>
	virtual void Draw(const GameTime *pGameTime);

	/// <summary>Adds a game object to be managed by the level.
	/// <param name="pGameObject">A pointer to the game object that will be managed.</param>
	/// </summary>
	virtual void AddGameObject(GameObject *pGameObject);

	/// <summary>Calculates and adds a game object to it's current sector.
	/// <param name="pGameObject">A pointer to the game object that will have its
	/// sector position updated.</param>
	/// </summary>
	virtual void UpdateSectorPosition(GameObject *pGameObject);


protected:

	Vector2 m_sectorCount;

	Vector2 m_sectorSize;

	std::vector<GameObject *> *m_pSectors;

	unsigned int m_totalSectorCount;


private:

	static Level *s_pCurrentLevel;
	
	// game objects
	PlayerShip m_playerShip;
	std::vector<Bullet *> m_bullets;
	std::vector<GameObject *> m_gameObjects;

	virtual void CheckCollisions(std::vector<GameObject *> &sector);

};
