#include <iostream>

using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i-1; 
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;            
        }

        arr[j+1] = key;
        

        cout << endl;
        cout << "Pass " << i << " : ";
        for (int j = 0; j < n; j++){
            cout << arr[j] << " ";   
        }
    }
}

int main (){
    int arr[] = {4, 1, 3, 2, 5};
    int n = 5;


    insertionSort(arr, n);

    return 0;
}