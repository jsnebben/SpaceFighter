/* ------------------------------------------------

				Space Fighter Game

					Ryan Appel
					 9/17/14


 GameObject.cpp: Source file for all game objects.

------------------------------------------------- */


#include "GameObject.h"
#include "Level.h"
#include "EnemyShip.h"

int GameObject::s_count = 0;

GameObject::GameObject()
{
	m_index = s_count;
	s_count++;

	m_isActive = false;
	m_collisionRadius = 0;
}

bool GameObject::AreObjectsColliding(GameObject *pGameObject1, GameObject *pGameObject2, CollisionData *pData)
{
	// Math
	float distanceSquared = Vector2::DistanceSquared(pGameObject1->m_position, pGameObject2->m_position);
	float radiiSum = pGameObject1->m_collisionRadius + pGameObject2->m_collisionRadius;
	float radiiSumSquared = radiiSum * radiiSum;

	if (distanceSquared <= radiiSumSquared)
	{
		PlayerShip *pPlayerShip = dynamic_cast<PlayerShip *>(pGameObject1);
		EnemyShip *pEnemyShip;
		Bullet *pBullet;
		Bullet2 *pBullet2;

		if (pPlayerShip)
		{
			if (!pPlayerShip->IsInvulnurable())
			{
				pEnemyShip = dynamic_cast<EnemyShip *>(pGameObject2);
				if (pEnemyShip)
				{
					// Collision detected
					ResetCollisionData(pData);
					pData->removeObject1 = true;
					return true;
				}
			}
		}
		else
		{
			pEnemyShip = dynamic_cast<EnemyShip *>(pGameObject1);
			if (pEnemyShip)
			{
				pBullet = dynamic_cast<Bullet *>(pGameObject2);
				if (pBullet)
				{
					// Collision detected
					ResetCollisionData(pData);
					pData->removeObject1 = true;
					pData->removeObject2 = true;
					return true;
				}

				pBullet2 = dynamic_cast<Bullet2 *>(pGameObject2);
				if (pBullet2)
				{
					// Collision detected
					ResetCollisionData(pData);
					pData->removeObject1 = true;
					pData->removeObject2 = true;
					return true;
				}
			}
		}
	}

	return false;
}

void GameObject::Update(const GameTime *pGameTime)
{
	if (IsActive() && Level::GetCurrentLevel())
	{
		Level::GetCurrentLevel()->UpdateSectorPosition(this);
	}
}

void GameObject::ResetCollisionData(CollisionData *pData)
{
	pData->removeObject1 = false;
	pData->removeObject2 = false;
}
