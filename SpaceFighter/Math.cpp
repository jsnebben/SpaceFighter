/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 Math.h: Source file for math functions and
 constants.

------------------------------------------------- */


#pragma once

#include "Math.h"

const float Math::PI = 3.1415926536f;
const float Math::NORMALIZE_ANGLE = 0.7071067624f;

float Math::Lerp(const float f1, const float f2, const float value)
{
	if (value <= 0) return f1;
	if (value >= 1) return f2;
	return (f1 * (1 - value) + f2 * value);
}