#ifndef GRANIASTOSLUP6_HH
#define GRANIASTOSLUP6_HH

#include "Bryla.hh"

class Graniastoslup6 : public Bryla
{
    public:
    Graniastoslup6(Vector3D srodek=Vector3D(),double z=10,double promien=15,std::string nazwa = "../datasets/garniastoslup6.dat" );
     ~Graniastoslup6(){delete wymiary;}
};




#endif
