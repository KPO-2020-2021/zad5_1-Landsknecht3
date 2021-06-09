#ifndef MATRIX3X3_HH
#define MATRIX3X3_HH


#include <iostream>
#include "Matrix.hh"


typedef Matrix<3>  Matrix3x3;


Matrix3x3 mac_rot_x(double kat);
Matrix3x3 mac_rot_y(double kat);
Matrix3x3 mac_rot_z(double kat);

#endif
