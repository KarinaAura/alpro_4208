#include <iostream>

int penjumlahanRekursif(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + penjumlahanRekursif(n - 1);
    }
}

int main() {
    int angka;
    std::cout << "Masukkan angka: ";
    std::cin >> angka;

    int hasil = penjumlahanRekursif(angka);
    std::cout << "Hasil penjumlahan: " << hasil << std::endl;

    return 0;
}