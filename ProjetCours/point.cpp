#include <iostream>
#include <vector>
#include <string> 

#include "point.h"

Point::Point(float _x, float _y, float _z) : m_x(_x), m_y(_y), m_z(_z) {
	
	std::cout << "Instancied " + ToString();

}

std::string Point::ToString() {

	return "x:" + std::to_string(m_x) + " y:" + std::to_string(m_y) + " z:" + std::to_string(m_z);

}