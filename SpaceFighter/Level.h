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

class Level
{
public:
	
	Level();
	virtual ~Level();

	static Level *GetCurrentLevel() { return s_pCurrentLevel; }

	virtual void LoadContent();

	virtual void UnloadContent() { };

	virtual void HandleInput(InputState *pInput);

	virtual void Update(const GameTime *pGameTime);

	virtual void Draw(const GameTime *pGameTime);

	virtual void AddGameObject(GameObject *pGameObject);

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
