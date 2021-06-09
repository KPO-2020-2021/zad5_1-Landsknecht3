#include "Bryla.hh"

Vector3D &Bryla::operator[](int index)
{
    return wierz[index];
}
Vector3D Bryla::operator[](int index) const
{
    return wierz[index];
}

void Bryla::set_nazwa(std::string nazwa)
{
    this->nazwa = nazwa;
}

void Bryla::set_srodek(Vector3D srodek)
{
    this->srodek = srodek;
}

Vector3D Bryla::get_srodek() const
{
    return srodek;
}

std::string Bryla::get_nazwa() const
{
    return nazwa;
}

void Bryla::przesun(Vector3D przes)
{
    for (int i = 0; i < (int)wierz.size(); i++)
    {
        wierz[i] = wierz[i] + przes;
    }
    srodek = srodek + przes;
}

void Bryla::translacja(Matrix3x3 obr)
{
    for (int i = 0; i < (int)wierz.size(); i++)
    {
        wierz[i] = (obr * wierz[i]);
    }
    srodek=obr*srodek;
}

void Bryla::zapisz()
{
    std::fstream plik;
    double tab[] = {0, 0, (*wymiary)[2] / 2};
    Vector3D przesun_sr(tab);

    plik.open(nazwa, std::ios::out);

    for (int i = 0; i < (int)wierz.size(); i += 2)
    {
        plik << srodek + przesun_sr << std::endl;
        for (int j = 0; j < 2; j++)
        {
            plik << wierz[j + i] << std::endl;
        }
        plik << srodek - przesun_sr << std::endl
             << std::endl;
    }

    plik << srodek + przesun_sr << std::endl;
    for (int j = 0; j < 2; j++)
    {
        plik << wierz[j] << std::endl;
    }
    plik << srodek - przesun_sr << std::endl
         << std::endl;
    plik.close();
}