#pragma once
#ifndef __QUAT_H__
#define __QUAT_H__
#include "common.h"
#include <iostream>

class Quaternion
{
private:
	GLfloat _angle;
	GLfloat*_axis;

public:
	// -- CONSTRUCTORS & DESTRUCTORS --
	// empty constructor
	Quaternion();
	// constructor with parameters
	Quaternion(GLfloat a, GLfloat b, GLfloat c, GLfloat d);
	// deep copy constructor
	Quaternion(Quaternion const& copy);
	// destructor
	~Quaternion();

	// -- OVERLOADED OPERATORS --
	/*bool operator==(Quaternion const&);

	Quaternion operator+(Quaternion const&);
	Quaternion operator-(Quaternion const&);
	Quaternion operator*(Quaternion const&);
	Quaternion operator/(Quaternion const&);

	Quaternion operator+=(Quaternion const&);
	Quaternion operator-=(Quaternion const&);
	Quaternion operator*=(Quaternion const&);
	Quaternion operator/=(Quaternion const&);

	friend std::ostream& operator<<(std::ostream&, Quaternion const& );
	friend std::istream& operator>>(std::istream&, Quaternion &);
	*/

	// -- OTHERS --
	const GLfloat a();
	const GLfloat b();
	const GLfloat c();
	const GLfloat d();


};

#endif