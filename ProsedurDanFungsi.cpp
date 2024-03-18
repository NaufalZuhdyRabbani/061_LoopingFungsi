#include <iostream>
using namespace std;

string nama;
int nXpander, nPorsche, nLamborghini, nBrio;
int hXpander = 300, hPorsche, hLamborghini, hBrio;

void input(){
    cout << "Nama Pembeli :";
    cin >> Nama;
    
    cout << "Jumlah Xpander";
    cin >> hXpander;

    cout << "Jumlah Porsche";
    cin >> hPorsche;

    cout << "Jumlah Lamborghini";
    cin >> hLamborghini;

    cout << "Jumlah Brio";
    cin >> nBrio;

}

 int TotalHarga()
 {
    return (nXpander * hXpander) + (nPorsche * hPorsche) + (nLamborghini * hLamborghini) + (nBrio * hBrio);
 }

 
 void Display()
 {
    cout << "Total Harganya :" << TotalHarga << endl;
 }

 int main()
 {
    input();
    Display();
    cout << "Apakah ingin membeli kembali ? ";
    cin >> pilihan;
    while(pilihan == 'y' ||pilihan == 'Y'); 
 }
