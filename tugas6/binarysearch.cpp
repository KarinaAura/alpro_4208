#include <iostream>
using namespace std;

// Fungsi untuk melakukan Binary Search pada array yang diurutkan
int binarySearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;  // Jika target tidak ditemukan, mengembalikan -1
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr, n, target);

    if (result == -1) {
        cout << "Target tidak ditemukan dalam array.\n";
    } else {
        cout << "Target ditemukan di indeks ke-" << result << ".\n";
    }

    return 0;
}