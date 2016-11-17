/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 Math.h: Header file for math functions and
 constants.

------------------------------------------------- */


#pragma once

class Math
{
public:

	static const float PI;
	static const float NORMALIZE_ANGLE;

	static float Lerp(const float f1, const float f2, float value);

};