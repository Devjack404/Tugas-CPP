#include <iostream>
using namespace std;
int main() {
    int arr[] = {6,8,7,4,2,5,3};
    int n = 7;
    int temp;
    cout << "Data awal: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
         cout << "i=" << i << " j=" << j << " -> ";
            if(arr[j] < arr[i]) {
                // langsung tukar
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

            // cetak array setiap langkah
            for(int k = 0; k < n; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}


