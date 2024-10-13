#ifndef POINT_H_
#define POINT_H__

class Point
{

public:
	float m_x, m_y, m_z;
	Point(float x, float y, float z);
	std::string ToString();

};

#endif // !POINT_H__
