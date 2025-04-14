#include <iostream>
using namespace std;

//mendeklarasikan array tanpa ukuran, wajib diberi nilai awal
int nilai[]={1,2,3};

//mendeklarasikan array dengan ukuran dan diberi nilai awal
string nama[5]= {"ben", "agus", "fara", "ama", "aqila"};

//mendeklarasikan array dengan ukuran dan tanpa nilai awal
float score[5];

int main(){
    cout << " Nama pada index 4 adalah " << nama[3] << endl;
    //memberi nilai pada elemen array per index
    nama[3]= "Ridha";
    cout << "Nama pada index 4 adalah " << nama[3] << endl;
}