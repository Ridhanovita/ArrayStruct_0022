#include <iostream>
#include <string>
using namespace std;

struct Weapon
{
    string name;
    int damage;
};

struct Player
{
    string name;
    string id;
    string level;
    Weapon weapone;
};

int main()
{
    Player pl[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Masukkan nama player = ";
        getline(cin, pl[i].name);
        cout << "Masukkan id player = ";
        cin >> pl[i].id;
        cout << "Masukkan level player = ";
        cin >> pl[i].level;
        cin.ignore();
        cout << "Masukkan nama weapon = ";
        getline(cin, pl[i].weapone.name);
        cout << "Masukkan damage weapon = ";
        cin >> pl[i].weapone.damage;
        cin.ignore();
    }
    cout << "Tampilkan player" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Nama player = " << pl[i].name << endl;
        cout << "Id player = " << pl[i].id << endl;
        cout << "Level Player = " << pl[i].level << endl;
        cout << "Nama weapon = " << pl[i].weapone.name << endl;
        cout << "Damage weapon = " << pl[i].weapone.damage << endl;
    }
}
