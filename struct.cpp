#include <iostream>
#include <string>
using namespace std;

struct Player {
    string name;
    string id;
    string level;
};

int main(){
    Player pl;
    cout << "Masukkan nama player = ";
    getline(cin,pl.name);
    cout << "Masukkan id player = ";
    getline(cin,pl.id);
    cout << "Masukkan level player = ";
    getline(cin,pl.level);

    cout << "Tampilkan player" << endl;
    cout << "Nama player = " << pl.name << endl;
    cout << "Tampilkan id player = " << endl;
    cout << "Id player = " << pl.id << endl;
    cout << "Tampilkan level player = " << endl;
    cout << "Level Player = " << pl.level << endl;
}