#include <iostream>
#include <string>

using namespace std;

//Latihan 5
struct Sepeda {
    string merk;
    string type;
    int tahun;
    double harga;
};

int main() {
    Sepeda sepeda;

    Sepeda* sepedaPtr = &sepeda; // Mendapatkan alamat dari objek sepeda

    // Mengakses member menggunakan pointer
    sepedaPtr->merk = "Polygon";
    sepedaPtr->type = "Sepeda Gunung";
    sepedaPtr->tahun = 2013;
    sepedaPtr->harga = 2000000.0;

    // Menampilkan data sepeda
    cout << "Data Sepeda:" << endl;
    cout << "Merk: " << sepedaPtr->merk << endl;
    cout << "Type: " << sepedaPtr->type << endl;
    cout << "Tahun: " << sepedaPtr->tahun << endl;
    cout << "Harga: " << sepedaPtr->harga << endl;

    return 0;
}