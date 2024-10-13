#ifndef INTEGER_H__
#define INTEGER_H__

#include <iostream>
#include <string>

class Integer {

private:
	int localInteger;

public:
	Integer(int _i);
	Integer();

	Integer operator+(const Integer& _i);
	void operator+=(const Integer& _i);

	Integer operator-(const Integer& _i);
	void operator-=(const Integer& _i);

	Integer operator*(const Integer& _i);
	void operator*=(const Integer& _i);

	Integer operator/(const Integer& _i);
	void operator/=(const Integer& _i);

	Integer operator%(const Integer& _i);
	void operator%=(const Integer& _i);

	friend std::ostream& operator<<(std::ostream& os, const Integer& _i);

};

#endif // INTEGER_H__
