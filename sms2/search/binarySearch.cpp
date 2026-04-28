#include <iostream>

using namespace std;


int main (){
    int arr[]={10,14,19,26,27,31,33,35,42,44};
    int n = 10;
    int loc, cari;

    cout << "Data awal : ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Masukan angka yang di cari : ";
    cin >> cari;

    for(int i = 0; i < n; i++){
        if(arr[i]==cari){
            loc = i+1;
            break;
        }
        else loc = 0;
    }
    if(loc != 0){
        cout << "Data ditemukan di posisi :"<< loc ;
    }
    else{
        cout << "Data tidak ditemukan" << endl;
    } 



    return 0;
}