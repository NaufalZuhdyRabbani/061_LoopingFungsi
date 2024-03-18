#include <iostream>
using namespace std;

int main(){
    char pilihan;

    do{
        cout << "Berangkat ambil takjil" << endl;
        cout << "Antre takjil" << endl;
        cout << "Ambil takjil" << endl;
        cout << "Apakah mau antre kembali ?" << endl;
        cin >> pilihan;
        
    }while(pilihan == 'y' || pilihan == 'Y');
}