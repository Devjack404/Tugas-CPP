#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* head = nullptr;
int pilih,d,b,hd;

void cetak(){
    Node* temp = head;
    while (temp != nullptr){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insertDepan(int x){
    Node* temp = new Node;
    temp -> data = x;
    temp -> next = head;
    head = temp;
}

void insertBelakang (int x){
    Node* temp = new Node;
    temp -> data = x;
    temp -> next = nullptr;
    if(head==nullptr){
        head=temp;
        return;
    }
    Node* bantu = head;
    while(bantu->next != nullptr){
        bantu = bantu->next;
    }bantu -> next =temp;

}

void hapusDepan(){
    if(head == nullptr){
        cout << "List Kosong, Tidak ada yang bisa dihapus." << endl;
        return;
    }
    Node* hapus = head;
    head = head->next;
    delete hapus; 
}

void hapusBelakang(){
    if(head == nullptr){
        cout << "List Kosong, Tidak ada yang bisa dihapus." << endl;
        return;
    }

    if(head->next == nullptr){
        delete head;
        head = nullptr;
        return;
    } 

    Node* hapus = head;
    Node* sebelum = nullptr;
    while(hapus -> next != nullptr){
        sebelum = hapus;
        hapus = hapus->next;
    }
    sebelum->next = nullptr;
    delete hapus;
}


int main (){
    cout << "Data awal : ";
    insertDepan(30);
    cetak();
    cout << "Data setelah tambah di depan : ";
    insertDepan(20);
    cetak();   
    cout << "Data setelah tambah di belakang : ";
    insertBelakang(50);
    cetak();  

    cout << "Menu Pilihan  :" << endl;
    cout << "1. Tambah Depan " << endl;
    cout << "2. Tambah Belakang " << endl;
    cout << "3. Hapus Depan " << endl;
    cout << "4. Hapus Belakang " << endl;
    cout << endl;
    cout << "Silakan pilih :";
    cin >> pilih;

    if(pilih == 1){
        cout << "Data Setalah Tambah depan : ";
        cin >> d;
        insertDepan(d);
        cetak();
    }

    if(pilih == 2){
        cout << "Data Setelah Tambah belakang : ";
        cin >> b;
        insertBelakang(b);
        cetak();
    }

    if(pilih == 3){
        cout << "Data Seteah Hapus Depan : ";
        hapusDepan();
        cetak();
    }

    if(pilih == 4){
        cout << "Data Seteah Hapus Belakang : ";
        hapusBelakang();
        cetak();
    }
    return 0; 
}