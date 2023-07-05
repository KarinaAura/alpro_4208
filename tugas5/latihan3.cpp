#include <iostream>
#define PHI 3.14159265358979323846

using namespace std;

 //Latihan 3
 
typedef struct {
    float panjang;
    float lebar;
} PersegiPanjang;

typedef struct {
    float radius;
} Lingkaran;

typedef struct {
    float radius;
    float tinggi;
} Kerucut;

typedef struct {
    float radius;
} Bola;

float hitungLuasPersegiPanjang(PersegiPanjang persegiPanjang) {
    return persegiPanjang.panjang * persegiPanjang.lebar;
}

float hitungLuasLingkaran(Lingkaran lingkaran) {
    return PHI * lingkaran.radius * lingkaran.radius;
}

float hitungVolumeKerucut(Kerucut kerucut) {
    return (1.0 / 3.0) * PHI * kerucut.radius * kerucut.radius * kerucut.tinggi;
}

float hitungVolumeBola(Bola bola) {
    return (4.0 / 3.0) * PHI * bola.radius * bola.radius * bola.radius;
}

int main() {
    PersegiPanjang persegiPanjang;
    Lingkaran lingkaran;
    Kerucut kerucut;
    Bola bola;

    cout << "=== Menghitung Luas Persegi Panjang, Luas Lingkaran, Volume Kerucut, dan Volume Bola ===" << endl;

    cout << "Masukkan panjang persegi panjang: ";
    cin >> persegiPanjang.panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> persegiPanjang.lebar;

    cout << "Masukkan radius lingkaran: ";
    cin >> lingkaran.radius;

    cout << "Masukkan radius kerucut: ";
    cin >> kerucut.radius;
    cout << "Masukkan tinggi kerucut: ";
    cin >> kerucut.tinggi;

    cout << "Masukkan radius bola: ";
    cin >> bola.radius;

    float luasPersegiPanjang = hitungLuasPersegiPanjang(persegiPanjang);
    float luasLingkaran = hitungLuasLingkaran(lingkaran);
    float volumeKerucut = hitungVolumeKerucut(kerucut);
    float volumeBola = hitungVolumeBola(bola);

    cout << "Luas Persegi Panjang: " << luasPersegiPanjang << endl;
    cout << "Luas Lingkaran: " << luasLingkaran << endl;
    cout << "Volume Kerucut: " << volumeKerucut << endl;
    cout << "Volume Bola: " << volumeBola << endl;

    return 0;
}