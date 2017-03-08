/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 Math.h: Header file for math functions and
 constants.

------------------------------------------------- */


#pragma once

/// <summary>Helper class for common math functions and constants.</summary>
class Math
{
public:

	static const float PI;
	static const float NORMALIZE_ANGLE;

	/// <summary>Used to linearly interpolate between two floating point values.
	/// <param name="start">The starting value.</param>
	/// <param name="end">The ending value.</param>
	/// <param name="value">The interpolation position from 0.0 to 1.0.</param>
	/// <returns>The interpolated value between start and end.<returns>
	/// </summary>
	static float Lerp(const float start, const float end, float value);

};