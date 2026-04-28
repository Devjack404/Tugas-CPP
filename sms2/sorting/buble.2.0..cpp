#include <iostream>
using namespace std;


int main (){
    int arr[] = {9,2,4,1,3,1};
    int n = 6;
    int temp;


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n -1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "Hasil Sorting : ";
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}