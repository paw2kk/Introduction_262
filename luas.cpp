#include <iostream>

using namespace std;

int main(){
    //Begin
    //numeric nPanjang, nLebar, nLuas
    float Panjang, Lebar, Luas;
    //display 'Masukkan Panjangnya ='
    cout << "Masukkan Panjangnya = ";
    //acc nPanjang
    cin >> Panjang;
    //display 'Masukkan Lebarnya = '
    cout << "Masukkan Lebarnya";
    //acc nLebar
    cin >> Lebar;
    //compute nLuas = nPanjang * nLebar
    Luas = Panjang * Lebar;
    //display 'Luas Persegi Panjang = ' + nLuas
    cout << "Luas persegi panjang = " << Luas;
}