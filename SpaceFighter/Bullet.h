/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 Bullet.h: Header file for bullets.

------------------------------------------------- */


#pragma once

#include "GameObject.h"
#include "Vector2.h"

class Bullet : public GameObject
{
public:	

	Bullet();
	virtual ~Bullet() { }

	static void SetTexture(std::string assetPath);

	virtual void Update(const GameTime *pGameTime);

	virtual void Draw(const GameTime *pGameTime);

	virtual void Activate(Vector2 position, bool isShotByPlayer = true);

	virtual float GetDamage() const { return m_damage; }

	virtual std::string ToString() const { return "Bullet"; }

protected:

	float m_speed;

	float m_damage;

	Vector2 m_direction;
	
private:
	
	static ALLEGRO_BITMAP *s_pTexture;
	static Vector2 s_textureOrigin;

};