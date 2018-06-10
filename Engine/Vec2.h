#pragma once

class Vec2
{
public:
	Vec2();
	Vec2(int _x,int _y);
	Vec2 Vec2::operator+ (const Vec2& v2) const;
	Vec2 Vec2::operator+= (const Vec2& v2) const;
	Vec2 Vec2::operator* (const Vec2& v2) const;

	int x, y;
private:

};

