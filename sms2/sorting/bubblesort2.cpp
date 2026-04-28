#include <iostream>
using namespace std;


int main (){
    int arr[] = {64, 34, 25, 12, 22};
    int n = 5;
    int temp;

    for (int a = 0; a < n ; a++){
        for(int i = 0; i < n -1; i++){
            if (arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}