// #include <iostream>
// #include <fstream>
#include "agenda.h"
using namespace std;

int main(){
    myclass halo;
    cout << "Hari Senin: \n";
    halo.tes(0);
    cout << "Hari Selasa: \n";
    halo.tes(1);
    cout << "Hari Rabu: \n";
    halo.tes(2);
    cout << "Hari Kamis: \n";
    halo.tes(3);
    cout << "Hari Jumat: \n";
    halo.tes(4);
    cout << "Hari Sabtu: \n";
    halo.tes(5);
    cout << "Hari Minggu: \n";
    halo.tes(6);
    
    halo.type();

    return 0;
}