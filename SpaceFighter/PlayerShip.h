/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14

					 
 PlayerShip.h: Header file for the player's ship.

------------------------------------------------- */


#pragma once

#include "Ship.h"

class PlayerShip : public Ship
{
public:	

	PlayerShip();
	virtual ~PlayerShip() { }

	static void SetTexture(std::string assetPath);

	virtual void Update(const GameTime *pGameTime);

	virtual void Draw(const GameTime *pGameTime);

	virtual void Fire();

	virtual bool CanFire() { return (m_coolDownTime == 0); }

	virtual void SetDesiredDirection(const Vector2 direction) { m_desiredDirection.Set(direction); }

	virtual std::string ToString() const { return "PlayerShip"; }

	virtual Vector2 GetHalfDimensions() const { return s_textureOrigin; }
	
protected:

	
private:

	static ALLEGRO_BITMAP *s_pTexture;
	static Vector2 s_textureOrigin;

	double m_coolDownTime;
	double m_maxCoolDownTime;

	Vector2 m_desiredDirection;
	Vector2 m_velocity;
	
	virtual void ConfineToScreen();

};