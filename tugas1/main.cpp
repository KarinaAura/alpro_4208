#include <iostream>

using namespace std;

  //Nama : Karina Aura Agustin
  //NIM : A11.2022.14343
  //Kelp : 4208


  //1.Tambah 2 bilangan

    int tambah(int a, int b) {
        return a + b;
    }

    int main() {
        int x, y;
        cout << "Masukkan bilangan pertama: ";
        cin >> x;
        cout << "Masukkan bilangan kedua: ";
        cin >> y;
        cout << "Hasil penjumlahan: " << tambah(x, y) << endl;
        return 0;
    }

    //2. Pengurangan 2 bilangan

        int pengurangan(int a, int b) {
        return a - b;
    }

    int main() {
        int num1, num2;
        cout << "Masukkan bilangan pertama: ";
        cin >> num1;
        cout << "Masukkan bilangan kedua: ";
        cin >> num2;
        int hasil = pengurangan(num1, num2);
        cout << "Hasil pengurangan: " << hasil << endl;
        return 0;
    }

    //3.Total value elemen dalam array
    //4.Rata-rata elemen array

      int input[100], jml_array, i, total, rata_rata;

      cout << "Input jumlah element array: ";
      cin >> jml_array;
      cout << endl;

      cout << "Input "<< jml_array << " angka (dipisah dengan enter): ";
      cout << endl;

      total = 0;
      for(i = 0; i < jml_array; i++){
        cout << "Angka ke-" << i+1 <<": ";
        cin >> input[i];
        total = total + input[i];
        rata_rata = total/jml_array;
      }

      cout << endl;

      cout << "Total penjumlahan dari "<< jml_array <<
              " angka tersebut adalah: " << total << endl;

      cout << "Jumlah Rata-rata bilangan tersebut adalah : "<< rata_rata << endl;

      return 0;


