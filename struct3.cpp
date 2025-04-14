#include <iostream>
#include <string>
using namespace std;

struct Weapon {
    string name;
    int damage;
};

struct Player {
    string name;
    string id;
    string level;
    Weapon weapone;
};

int main(){
    Player pl;
    cout << "Masukkan nama player = ";
    getline(cin,pl.name);
    cout << "Masukkan id player = ";
    cin >> pl.id;
    cout << "Masukkan level player = ";
    cin >> pl.level;
    cin.ignore();
    cout << "Masukkan nama weapon = ";
    getline(cin,pl.weapone.name);
    cout << "Masukkan damage weapon = ";
    cin >> pl.weapone.damage;

    cout << "Tampilkan player" << endl;
    cout << "Nama player = " << pl.name << endl;
    cout << "Id player = " << pl.id << endl;
    cout << "Level Player = " << pl.level << endl;
    cout << "Nama weapon = " << pl.weapone.name << endl;
    cout << "Damage weapon = "<< pl.weapone.damage << endl;
}

