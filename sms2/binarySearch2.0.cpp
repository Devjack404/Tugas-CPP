#include <iostream>

using namespace std;

int main (){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    int cari,loc=-1;

    cout << "Data Awal : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Masukan Angka yang dicari : ";
    cin >> cari;
    for(int i = 0; i < n ;i++){
        if(arr[i] == cari){
            loc = i;
            break;
        }
    }
    if(loc != -1){
        cout << "Data ditemukan di index : " << loc + 1 ;
    }
    else{   
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}