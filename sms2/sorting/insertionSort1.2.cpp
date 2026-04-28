#include <iostream>
using namespace std;

int main (){
    int arr[] = {6,2,1,4,5};
    int n = 5;

    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i - 1;

        while(j > 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    cout << "Data Sort :";
    for(int i = 0;i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}