#include "Vector2D.h"

using namespace neru;

neru::Vector2D::Vector2D() :
	x(0),
	y(0) {}

neru::Vector2D::Vector2D(const float& x, const float& y) :
	x(x),
	y(y) {}

neru::Vector2D::~Vector2D()
{

}

float neru::Vector2D::length() const
{
	return sqrt(x * x + y * y);
}

Vector2D neru::Vector2D::normalize() const
{	
	return Vector2D(this->x / this->length(), this->y / this->length());
}

Vector2D& neru::Vector2D::operator=(const Vector2D& other)
{
	this->x = other.x;
	this->y = other.y;
	return *this;
}

Vector2D neru::Vector2D::operator+(const Vector2D& other) const
{
	return Vector2D(this->x + other.x, this->y + other.y);
}

Vector2D neru::Vector2D::operator-(const Vector2D& other) const
{
	return Vector2D(this->x - other.x, this->y - other.y);
}

Vector2D neru::Vector2D::operator*(const float& scalar) const
{
	return Vector2D(this->x * scalar, this->y * scalar);
}

float neru::Vector2D::operator*(const Vector2D& other) const
{
	return this->x * other.x + this->y * other.y;
}