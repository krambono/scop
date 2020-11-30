#include "mgl.h"

float mat2x2at(const t_mat2x2 *mat, int x, int y)
{
	return (((float *)mat)[x * 2 + y]);
}

float mat3x3at(const t_mat3x3 *mat, int x, int y)
{
	return (((float *)mat)[x * 3 + y]);
}

float mat4x4at(const t_mat4x4 *mat, int x, int y)
{
	return (((float *)mat)[x * 4 + y]);
}