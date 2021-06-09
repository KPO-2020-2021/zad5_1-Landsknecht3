#ifndef PROSTOPADLOSCIAN_HH
#define PROSTOPADLOSCIAN_HH

#include "Bryla.hh"

class Prostopadloscian : public Bryla
{

public:

Prostopadloscian(Vector3D srodek=Vector3D(), double x=50,double y=50, double z=50,std::string nazwa="../datasets/prostopadloscian.dat");

 ~Prostopadloscian(){delete wymiary;}
};







#endif 