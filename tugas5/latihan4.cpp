#include <iostream>
#include <string>

using namespace std;

//Latihan4

struct Mahasiswa {
    string nim;
    string nama;
    int tahunLulus;
    string jurusan;
};

void printMahasiswaArrayStatis(Mahasiswa mhsArray[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "NIM: " << mhsArray[i].nim << endl;
        cout << "Nama: " << mhsArray[i].nama << endl;
        cout << "Tahun Lulus: " << mhsArray[i].tahunLulus << endl;
        cout << "Jurusan: " << mhsArray[i].jurusan << endl;
        cout << endl;
    }
}

void printMahasiswaArrayDinamis(Mahasiswa* mhsArray[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "NIM: " << mhsArray[i]->nim << endl;
        cout << "Nama: " << mhsArray[i]->nama << endl;
        cout << "Tahun Lulus: " << mhsArray[i]->tahunLulus << endl;
        cout << "Jurusan: " << mhsArray[i]->jurusan << endl;
        cout << endl;
    }
}

int main() {
    // Array Statis
    Mahasiswa mhsArrayStatis[4];
    mhsArrayStatis[0] = { "A11.2020.01234", "Budi", 2023, "Broadcasting" };
    mhsArrayStatis[1] = { "A11.2010.01234", "Ali", 2013, "Sistem Informasi" };
    mhsArrayStatis[2] = { "A11.2000.01234", "Siti", 2003, "DKV" };
    mhsArrayStatis[3] = { "A11.1990.01234", "Andi", 1993, "Kesehatan" };

    cout << "Data Mahasiswa (Array Statis):" << endl;
    printMahasiswaArrayStatis(mhsArrayStatis, 4);

    // Array Dinamis
    Mahasiswa* mhsArrayDinamis[4];
    mhsArrayDinamis[0] = new Mahasiswa { "A11.2020.01234", "Budi", 2023, "Broadcasting" };
    mhsArrayDinamis[1] = new Mahasiswa { "A11.2010.01234", "Ali", 2013, "Sistem Informasi" };
    mhsArrayDinamis[2] = new Mahasiswa { "A11.2000.01234", "Siti", 2003, "DKV" };
    mhsArrayDinamis[3] = new Mahasiswa { "A11.1990.01234", "Andi", 1993, "Kesehatan" };

    cout << "Data Mahasiswa (Array Dinamis):" << endl;
    printMahasiswaArrayDinamis(mhsArrayDinamis, 4);

    // Menghapus objek yang dialokasikan secara dinamis
    for (int i = 0; i < 4; i++) {
        delete mhsArrayDinamis[i];
    }

    return 0;
}