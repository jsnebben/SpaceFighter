/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 Vector2.h: Header file for two-dimensional
 vectors.

------------------------------------------------- */


#pragma once
 
#include <math.h>
 
class Vector2
{
 
public:
    Vector2(const float x = 0, const float y = 0);
    ~Vector2() {};
 
	float DistanceSquared() const;
    float Distance() const;

	void Set(const float x, const float y);
	void Set(const Vector2 vector);
    void Normalize();
    
	float DotProduct(const Vector2 &v2) const;
    float CrossProduct(const Vector2 &v2) const;
 
    static Vector2 Zero();
    
	static float Distance(const Vector2 &v1, const Vector2 &v2);
	static Vector2 Lerp(const Vector2 &v1, const Vector2 &v2, float value);
 
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