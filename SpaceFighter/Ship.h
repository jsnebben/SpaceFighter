/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 Ship.h: Header file for the base ship class.

------------------------------------------------- */


#pragma once

#include "GameObject.h"
#include "Bullet.h"


class Ship : public GameObject
{
public:	

	Ship();
	virtual ~Ship() { }

	virtual void Update(const GameTime *pGameTime);

	virtual void Draw(const GameTime *pGameTime) = 0;

	virtual void Fire() = 0;

	virtual void SetBulletPool(std::vector<Bullet *> *pBullets) { m_pBullets = pBullets; }

	virtual void Hit(const float damage);

	virtual bool IsInvulnurable() const { return m_isInvulnurable; }

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
	
private:

};