#include "Vec2.h"

Vec2::Vec2()
{
}

Vec2::Vec2(int _x, int _y)
{
	x = _x;
	y = _y;
}

Vec2 Vec2::operator+(const Vec2 & v2) const
{
	Vec2 result;
	result.x = (this->x + v2.x);
	result.y = (this->y + v2.y);
	return result;
}

Vec2 Vec2::operator*(const Vec2 & v2) const
{
	Vec2 result;
	result.x = (this->x * v2.x);
	result.y = (this->y * v2.y);
	return result;
}
