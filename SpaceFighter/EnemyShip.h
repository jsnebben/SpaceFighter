/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14

					 
 EnemyShip.h: Header file for the enemy ships.

------------------------------------------------- */


#pragma once

#include "Ship.h"

class EnemyShip : public Ship
{
public:	

	EnemyShip();
	virtual ~EnemyShip() { }

	virtual void Update(const GameTime *pGameTime);

	virtual void Draw(const GameTime *pGameTime) = 0;

	virtual void Initialize(const Vector2 position, const double delaySeconds);

	virtual void Fire();

	virtual double GetDelaySeconds() const { return m_delaySeconds; }

	virtual std::string ToString() const { return "EnemyShip"; }

protected:

private:

	double m_delaySeconds;

};