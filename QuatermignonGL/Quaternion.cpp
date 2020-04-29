#include "Quaternion.h"

Quaternion::Quaternion()
{
	_angle = 0.0;
	_axis = (GLfloat*) calloc(3,sizeof(GLfloat));
	if (!_axis) throw ("Unable to allocate memory");
}

Quaternion::Quaternion(GLfloat a, GLfloat b, GLfloat c, GLfloat d)
{
	_angle = a;
	_axis = (GLfloat*) malloc(3*sizeof(GLfloat));
	if (!_axis) throw ("Unable to allocate memory");
	else {
		_axis[0] = b;
		_axis[1] = c;
		_axis[2] = d;
	}
}

/*Quaternion::Quaternion(Quaternion const& q)
{
	_angle = q.a;
	_axis = (GLfloat*)malloc(3 * sizeof(GLfloat));
	if (!_axis) throw ("Unable to allocate memory");
	else {
		_axis[0] = q.b();
		_axis[1] = q.c();
		_axis[2] = q.d();
	}
}*/

Quaternion::~Quaternion()
{
	delete[] _axis;
}

const GLfloat Quaternion::a()
{
	return _angle;
}

const GLfloat Quaternion::b()
{
	return _axis[0];
}

const GLfloat Quaternion::c()
{
	return _axis[1];
}

const GLfloat Quaternion::d()
{
	return _axis[2];
}
/*
int main() {
	printf("\n======== TEST QUATERNION ========\n\n");
	printf("\n-- empty constructor\n\n");
	Quaternion q0;
	printf("a : %f\n", q0.a());
	printf("b: %f\n", q0.b());
	printf("c : %f\n", q0.c());
	printf("d : %f\n", q0.d());
	printf("\n-- parameters constructor\n\n");
	Quaternion q1(60.5, 1.0, 0.0, 0.0);
	printf("a : %f\n", q1.a());
	printf("b: %f\n", q1.b());
	printf("c : %f\n", q1.c());
	printf("d : %f\n", q1.d());
	printf("-- copy constructor");
	Quaternion q2(q1);
	printf("a : %f", q.a());
	printf("b: %f", q.b());
	printf("c : %f", q.c());
	printf("d : %f", q.d());
	return 0;
}*/