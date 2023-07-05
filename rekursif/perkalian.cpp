#include <iostream>

int perkalianRekursif(int a, int b) {
  // Basis rekursif
  if (b == 0) {
    return 0;
  }
  
  // Panggil fungsi rekursif dengan mengurangi nilai b sebesar 1
  // dan tambahkan a pada setiap pemanggilan rekursif
  return a + perkalianRekursif(a, b - 1);
}

int main() {
  int a, b;
  std::cout << "Masukkan dua angka: ";
  std::cin >> a >> b;
  
  int hasil = perkalianRekursif(a, b);
  std::cout << "Hasil perkalian: " << hasil << std::endl;
  
  return 0;
}