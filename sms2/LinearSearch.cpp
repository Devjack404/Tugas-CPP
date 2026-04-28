#include <iostream>
using namespace std;


int main (){
    cout << "Linear Search : "  << endl;

    int n = 10;
    int x[]={10,14,19,26,27,31,33,35,42,44};
    int cari,loc;

    cout << "Data array" << endl;
    for(int i = 0; i < n;i++){
        cout << x[i] << " ";
    }

    cout << endl;
    cout << "Data yang dicari : ";
    cin>>cari;

    for(int i = 0; i < n; i++){
        if(x[i]==cari){
            loc=i+1;
            break;
        }
        else loc=0;
    }
    if(loc !=0){
        cout << "Ditemukan pada posisi ke :" << loc;
    }
    else{
        cout << "Data tidak ditemukan";
    }

    return 0;
}