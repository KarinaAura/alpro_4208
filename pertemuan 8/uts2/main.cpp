#include <iostream>
using namespace std;

// Metode pengurutan menggunakan algoritma Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Tukar elemen jika elemen saat ini lebih kecil dari elemen berikutnya
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Metode pengurutan menggunakan algoritma Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                // Update indeks elemen terbesar saat ini
                maxIndex = j;
            }
        }
        // Tukar elemen terbesar dengan elemen pertama dalam setiap iterasi
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

int main() {
    int arr[] = {5, 3, 8, 2, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Pengurutan menggunakan Bubble Sort
    bubbleSort(arr, n);
    cout << "Hasil pengurutan menggunakan Bubble Sort: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Pengurutan menggunakan Selection Sort
    selectionSort(arr, n);
    cout << "Hasil pengurutan menggunakan Selection Sort: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
