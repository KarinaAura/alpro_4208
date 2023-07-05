#include <iostream>
using namespace std;

// Fungsi untuk melakukan Linear Search pada array
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  // Jika target ditemukan, mengembalikan indeks
        }
    }

    return -1;  // Jika target tidak ditemukan, mengembalikan -1
}

int main() {
    int arr[] = {5, 8, 2, 12, 23, 16, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = linearSearch(arr, n, target);

    if (result == -1) {
        cout << "Target tidak ditemukan dalam array.\n";
    } else {
        cout << "Target ditemukan di indeks ke-" << result << ".\n";
    }

    return 0;
}