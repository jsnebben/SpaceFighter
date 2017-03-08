/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 Vector2.h: Header file for two-dimensional
 vectors.

------------------------------------------------- */


#pragma once
 
#include <math.h>
 

/// <summary>Class for two-dimensional vectors.</summary>
class Vector2
{
 
public:

    Vector2(const float x = 0, const float y = 0);
    ~Vector2() {};


	/// <summary>Used to calculate the length of the vector.
	/// <returns>The length of the vector.</returns>
	/// </summary>
    float Length() const;

	/// <summary>Used to calculate the squared length of the vector.
	/// <returns>The length of the vector squared.</returns>
	/// </summary>
	float LengthSquared() const;


	/// <summary>Sets the vector's components.
	/// <param name="x">The new x component.</param>
	/// <param name="y">The new y component.</param>
	/// </summary>
	void Set(const float x, const float y);

	/// <summary>Sets the vector's components to match those of another vector.
	/// <param name="vector">The vector whos components to copy.</param>
	/// </summary>
	void Set(const Vector2 vector);

	/// <summary>Used to resize the vector to a length of one.</summary>
    void Normalize();
    

	/// <summary>Calculates the dot product between this vector and another.
	/// <param name="v2">A reference to the vector to dot.</param>
	/// <returns>The dot product.</returns>
	/// </summary>
	float DotProduct(const Vector2 &v2) const;

	/// <summary>Calculates the cross product between this vector and another.
	/// <param name="v2">A reference to the vector to cross.</param>
	/// <returns>The cross product.</returns>
	/// </summary>
    float CrossProduct(const Vector2 &v2) const;
 

	/// <summary>A vector with both components set to zero.
	/// <returns>A zero vector.</returns>
	/// </summary>
    static Vector2 Zero();
	

	/// <summary>Calculates the distance between two vectors.
	/// <param name="v1">A reference to the first vector.</param>
	/// <param name="v2">A reference to the second vector.</param>
	/// <returns>The distance between the vectors.</returns>
	/// </summary>
	static float Distance(const Vector2 &v1, const Vector2 &v2);

	/// <summary>Calculates the squared distance between two vectors.
	/// <param name="v1">A reference to the first vector.</param>
	/// <param name="v2">A reference to the second vector.</param>
	/// <returns>The distance between the vectors squared.</returns>
	/// </summary>
	static float DistanceSquared(const Vector2 &v1, const Vector2 &v2);


	/// <summary>Used to linearly interpolate between two vectors.
	/// <param name="start">The starting vector.</param>
	/// <param name="end">The ending vector.</param>
	/// <param name="value">The interpolation position from 0.0 to 1.0.</param>
	/// <returns>The interpolated vector between start and end.</returns>
	/// </summary>
	static Vector2 Lerp(const Vector2 &start, const Vector2 &end, float value);
 

	// Operator Definitions

    Vector2 &operator= (const Vector2 &v2);
 
    Vector2 &operator+=(const Vector2 &v2);
    Vector2 &operator-=(const Vector2 &v2);
    Vector2 &operator*=(const float scalar);
    Vector2 &operator/=(const float scalar);
 

    const Vector2 operator+(const Vector2 &v2) const;
    const Vector2 operator-(const Vector2 &v2) const;
    const Vector2 operator*(const float scalar) const;
    const Vector2 operator/(const float scalar) const;
 

    bool operator==(const Vector2 &v2) const;
    bool operator!=(const Vector2 &v2) const;


    float X, Y;
};