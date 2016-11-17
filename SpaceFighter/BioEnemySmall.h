/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14

					 
 BioEnemySmall.h: Header file for the small enemy
 bio-mechanical ship.

------------------------------------------------- */


#pragma once

#include "EnemyShip.h"

class BioEnemySmall : public EnemyShip
{
public:	

	BioEnemySmall();
	virtual ~BioEnemySmall() { }

	static void SetTexture(std::string assetPath);

	virtual void Update(const GameTime *pGameTime);

	virtual void Draw(const GameTime *pGameTime);

	virtual std::string ToString() const { return "BioEnemySmall"; }

	virtual Vector2 GetHalfDimensions() const { return s_textureOrigin; }
	
protected:

private:

	static ALLEGRO_BITMAP *s_pTexture;
	static Vector2 s_textureOrigin;


};