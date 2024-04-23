#include <iostream>
using namespace std;

class bangunDatar
{
private:
    float panjang,Lebar;
public:
    float Luas;

    void input(){ //methode input persegi panjang

       cout << "Masukan Panjangnya =";
       cin >> panjang;
       cout << "Masukan Lebarnya = ";
       cin >> Lebar;
    }
    float hitungLuas () {
        return panjang * Lebar;
    }
    
};

bangunDatar::bangunDatar(/* args */)
{
}

bangunDatar::~bangunDatar()
{
}
