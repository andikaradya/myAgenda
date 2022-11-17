#include <iostream>
#include <fstream>
using namespace std;


class myclass{
    private:
    string str[7][5];
    int x;
    public:
    void tes(int n){
        // for(int i=0; i<7; i++){
            cout << "Berapa agenda? ";
            cin >> x;
            // ofstream MyFile("MyAgenda.txt");
            for(int j=0; j<x; j++){
                cout << "Masukkan agenda ke-" << j+1 << ": ";
                cin >> ws;
                getline (cin, str[n][j]);
            }
            // for(int j=0; j<x; j++){
            //     MyFile << str[n][j] << endl;
            // }
        }
    // }
    void type(){
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
    
};

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