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
        retur panjang * Lebar;
    }

    void display(){
        cout << "Panjangnya = " << panjang << endl;
        cout << "Lebarnya = " << Lebar << endl;
        cout << "Luasnya = " << hitungLuas() << endl;
    }

};

bangunDatar::bangunDatar(/* args */)
{
}

bangunDatar::~bangunDatar()
{
}
