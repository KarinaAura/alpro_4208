#include <iostream>
#include <string>
#include <locale>
#include <iomanip>

using namespace std;

//Latihan 2

struct Sepeda {
    string merk;
    string type;
    int tahun;
    double harga;
};

int main() {
    Sepeda sepeda;

    // Mengisi data sepeda
    sepeda.merk = "Polygon";
    sepeda.type = "Sepeda Gunung";
    sepeda.tahun = 2013;
    sepeda.harga = 2000000.0;

    // Menampilkan data sepeda
    cout << "Data Sepeda:" << endl;
    cout << "Merk: " << sepeda.merk << endl;
    cout << "Type: " << sepeda.type << endl;
    cout << "Tahun: " << sepeda.tahun << endl;
    cout << "Harga: " << fixed << setprecision(2) << sepeda.harga << endl;

    return 0;
}