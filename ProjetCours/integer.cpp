#include "integer.h"

Integer::Integer(int _i) : localInteger(_i)
{
}

Integer::Integer() : localInteger(0)
{
}

Integer Integer::operator+(const Integer& _i)
{
	return Integer(localInteger + _i.localInteger);
}

void Integer::operator+=(const Integer& _i)
{
	localInteger += _i.localInteger;
}

Integer Integer::operator-(const Integer& _i)
{
	return Integer(localInteger - _i.localInteger);
}

void Integer::operator-=(const Integer& _i)
{
	localInteger -= _i.localInteger;
}

Integer Integer::operator*(const Integer& _i)
{
	return Integer(localInteger * _i.localInteger);
}

void Integer::operator*=(const Integer& _i)
{
	localInteger *= _i.localInteger;
}

Integer Integer::operator/(const Integer& _i)
{
	return Integer(localInteger / _i.localInteger);
}

void Integer::operator/=(const Integer& _i)
{
	localInteger /= _i.localInteger;
}

Integer Integer::operator%(const Integer& _i)
{
	return Integer(localInteger % _i.localInteger);
}

void Integer::operator%=(const Integer& _i)
{
	localInteger %= _i.localInteger;
}

std::ostream& operator<<(std::ostream& os, const Integer& _i)
{
	os << std::to_string(_i.localInteger) << " int";
	return os;
}
