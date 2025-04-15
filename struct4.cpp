#include <iostream>
using namespace std;

//membuat struct untuk detail alamat
struct detailAlamat{
    string desa;
    string kota;
};

//membuat struct mahasiswa
struct mahasiswa{
    string nim;
    string nama;
    detailAlamat alamat;
};

int main(){
    //menentukan banyak data yang akan dimasukkan ke array
    mahasiswa mhs[2];
}