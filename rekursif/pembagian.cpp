#include <iostream>
using namespace std;

int pembagian(int dividend, int divisor) {
    // Kasus dasar
    if (divisor == 0) {
        cout << "Error: Pembagi tidak boleh nol." << endl;
        return 0;
    }
    if (dividend < divisor) {
        return 0;
    }
    
    // Kasus rekursif
    return 1 + pembagian(dividend - divisor, divisor);
}

int main() {
    int dividend, divisor;
    
    cout << "Masukkan dividend: ";
    cin >> dividend;
    
    cout << "Masukkan divisor: ";
    cin >> divisor;
    
    int hasil = pembagian(dividend, divisor);
    cout << "Hasil pembagian: " << hasil << endl;
    
    return 0;
}