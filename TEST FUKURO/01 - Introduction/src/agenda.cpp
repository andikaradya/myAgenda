#include "agenda.h"
using namespace std;

void myclass::tes(int n){
    cout << "Berapa agenda? ";
    cin >> x;
    for(int j=0; j<x; j++){
        cout << "Masukkan agenda ke-" << j+1 << ": ";
        cin >> ws;
        getline (cin, str[n][j]);
    }   
}
void myclass::type(){
    ofstream MyFile("MyAgenda.txt");
        for(int i=0; i<7; i++){
            switch (i) {
            case 0:
                cout << "Senin" << endl;
                MyFile << "Senin" << endl;
                break;
            case 1:
                cout << "Selasa" << endl;
                MyFile << "Selasa" << endl;
                break;
            case 2:
                cout << "Rabu" << endl;
                MyFile << "Rabu" << endl;
                break;
            case 3:
                cout << "Kamis" << endl;
                MyFile << "Kamis" << endl;
                break;
            case 4:
                cout << "Jumat" << endl;
                MyFile << "Jumat" << endl;
                break;
            case 5:
                cout << "Sabtu" << endl;
                MyFile << "Sabtu" << endl;
                break;
            case 6:
                cout << "Minggu" << endl;
                MyFile << "Minggu" << endl;
                break;
            }
            for(int j=0; j<5; j++){
                if (str[i][j]==""){
                    break;
                }
                else{
                    cout << str[i][j] << endl;
                    MyFile << str[i][j] << endl;
                }
            }
            cout << endl;
            MyFile << endl;
        }
}