#include <iostream>
using namespace std;


int main (){
    cout << "======================"  << endl;
    cout << "Linear Search : "  << endl;
    cout << "======================"  << endl;
    int n = 15;
    int x[n]={2,4,5,6,7,8,9,12,14,16,17,18,20,24,25};
    int cari;

    cout << "Data Array ";
    for(int i = 0; i < n;i++){
        cout << x[i] << " ";
    }

    cout << "\nData yang dicari : " ;
    cin>>cari;
    int awal = 0, akhir =15,tengah;
    bool ditemukan = false;
    for(int i = 0 ; awal <= akhir; i++){
        cout << "index ke-" << i << "= " << tengah << " awal=" << awal <<" akhir=" << akhir << endl;
        tengah = (awal + akhir)/2;
        if(x[tengah] == cari){
            cout << "Ditemukan pada index ke-" << tengah << endl;
            ditemukan = true;
            break;
        }
        else if(x[tengah] < cari ){
            awal = tengah + 1;
        }
        else{
            akhir = tengah - 1;
        }
    }

    if(!ditemukan){
        cout << "Data tidak ditemukan" << endl;
    } 

    return 0;
}


// #include <iostream>
// using namespace std;

// int main() {
//     int n = 15;
//     int x[] = {2, 4, 5, 6, 7, 8, 9, 12, 14, 16, 17, 18, 20, 24, 25};
//     int cari, awal = 0, akhir = n - 1, tengah;
//     bool ketemu = false;

//     cout << "Cari angka: ";
//     cin >> cari;

//     while (awal <= akhir) {
//         tengah = awal + (akhir - awal) / 2; // Lebih aman dari overflow

//         if (x[tengah] == cari) {
//             cout << "Ditemukan di index: " << tengah << endl;
//             ketemu = true;
//             break;
//         }
        
//         if (x[tengah] < cari) awal = tengah + 1;
//         else akhir = tengah - 1;
//     }

//     if (!ketemu) cout << "Data tidak ditemukan." << endl;

//     return 0;
// }