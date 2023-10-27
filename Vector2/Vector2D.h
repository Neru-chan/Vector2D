#pragma once
#include <math.h>

namespace neru {
class Vector2D {
public:
	Vector2D();
	Vector2D(const float& x, const float& y);
	virtual ~Vector2D();

	virtual float length() const;
	virtual Vector2D normalize() const;

	Vector2D& operator=(const Vector2D&);
	Vector2D operator+(const Vector2D&) const;
	Vector2D operator-(const Vector2D&) const;
	Vector2D operator*(const float&) const;
	float operator*(const Vector2D&) const;

	float x;
	float y;

private:
	
};
}