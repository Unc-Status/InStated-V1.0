//mathlib.h
#ifndef MATHLIB_H
#define MATHLIB_H

#include <math.h>

typedef float vec;
typedef vec vec3[3];
typedef vec vec4[4];
typedef vec vec6[6];

#define DotProduct(x, y)((x)[0] * (y)[0] + (x)[1] * (y)[1] + (x)[2] * (y)[2])

int snap( vec point );


#endif