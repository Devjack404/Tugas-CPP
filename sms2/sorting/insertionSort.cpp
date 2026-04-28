#include <iostream>
using namespace std;

int main() {
    int arr[] = {6,8,7,4,2,5,3};
    int n = 7;
    int temp, j;

    cout << "Data awal: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl << endl;
    for(int i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1; 
        cout << "i=" << i << " ambil temp=" << temp << endl;

        while(j >= 0 && temp < arr[j]) {
            cout << " i=" << i << " j=" << j << " -> ";
            arr[j + 1] = arr[j];

            for(int k = 0; k < n; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
            j--;
        }
        arr[j + 1] = temp;
        cout << "  Masukkan temp -> ";

        for(int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }

    return 0;
}


// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {6, 8, 7, 4, 2, 5, 3};
//     int n = sizeof(arr) / sizeof(arr[0]); // Menghitung jumlah elemen otomatis

//     cout << "Data sebelum diurutkan: ";
//     for (int x : arr) cout << x << " "; // Menggunakan Range-based loop (C++11)
//     cout << endl;

//     for (int i = 1; i < n; i++) {
//         int key = arr[i]; // Ambil data sebagai kunci
//         int j = i - 1;

//         // Geser elemen yang lebih besar dari 'key' ke kanan
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key; // Letakkan 'key' di posisi yang benar
//     }

//     cout << "Data setelah diurutkan: ";
//     for (int x : arr) cout << x << " ";
//     cout << endl;

//     return 0;
// }