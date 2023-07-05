#include <iostream>
using namespace std;

// Fungsi rekursif pangkat
int pangkat(int base, int exponent) {
    // Kasus dasar
    if (exponent == 0) {
        return 1;
    }
    // Kasus rekursif
    else {
        return base * pangkat(base, exponent - 1);
    }
}

int main() {
    int base, exponent;
    cout << "Masukkan basis: ";
    cin >> base;
    cout << "Masukkan eksponen: ";
    cin >> exponent;

    // Memanggil fungsi pangkat
    int hasil = pangkat(base, exponent);
    cout << "Hasil: " << hasil << endl;

    return 0;
}
