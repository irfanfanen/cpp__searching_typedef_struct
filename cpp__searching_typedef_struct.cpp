#include<iostream>
#include<string>
 
using namespace std;
 
typedef struct {
    int nim;
    char nama[100];
}mahasiswa;
 
mahasiswa mhs[100];

int 
    jumlah_mhs,
    search,
    key
;

bool 
    found = false
;

int main() {

    cout<<"Masukan Jumlah mahasiswa : "; cin>>jumlah_mhs; cout<<endl;

    for(int i=0; i<jumlah_mhs; i++) {
        cout<<"Mahasiswa ke : "<<i+1; cout<<endl;
        cout<<"Nama : "; cin>>mhs[i].nama; 
        cout<<"NIM  : "; cin>>mhs[i].nim; cout<<endl;
    }
 
    cout<<"Cari Berdasarkan NIM : "; cin>>search; cout<<endl;

    for(int i=0; i<jumlah_mhs; i++) {
        if(search == mhs[i].nim) {
            key = i;
            found = true;
        }
    }

    if(found){
        cout<<"Pencarian : "<<search; cout<<endl;
        cout<<"Nama : "<<mhs[key].nama; cout<<endl;
        cout<<"Nim  : "<<mhs[key].nim; cout<<endl;
    }else {
        cout<<"Pencarian : "<<search; cout<<endl;
        cout<<"Tidak ada"; cout<<endl;
    }
}