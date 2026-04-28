#include <iostream>
using namespace std;


int main (){
    int arr[]={10,14,19,26,27,31,33,35,42,44};
    int n = 10;
    int cari, loc;

    cout << "Data Array : ";
    for(int i=0;i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Masukan Data yang Dicari :";
    cin >> cari;

    for(int i = 0; i < n;i++){
        if(arr[i] == cari){
            loc = i+1;
            break;
        }
        else loc = 0;
    }
    if(loc != 0){
        cout << "Data di temukan!" << endl;
        cout << "Data yang Anda cari berada di index :" << loc << endl;
    }
    else{
        cout << "Data tidak temukan!" << endl;
    }
    

    return 0;
}