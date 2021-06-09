#ifndef BRYLA_HH
#define BRYLA_HH

#include "Vector3D.hh"
#include "Matrix3x3.hh"
#include <fstream>
#include <vector>

class Bryla
{
 protected:
 Vector3D *wymiary;
 std::vector<Vector3D> wierz;
 Vector3D srodek;
 std::string nazwa;
 public:

  Vector3D &operator[](int index);
  Vector3D operator[](int index)const;

 void set_srodek(Vector3D srodek);
 void set_nazwa(std::string nazwa);
 Vector3D get_srodek() const;
 std::string get_nazwa() const;

 void przesun(Vector3D przes);
 void translacja(Matrix3x3 obr);

 void zapisz();
 ~Bryla(){delete wymiary;}
};





#endif
