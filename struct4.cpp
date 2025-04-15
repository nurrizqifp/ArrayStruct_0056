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

    for(int i = 0; i < 2; i++){ //perulangan untuk mengulangi sebanyak index array input
    cout << "Mahasiswa ke-" << i+1 << endl;
    cout << "Masukkan NIM = ";
    cin >> mhs[i].nim;
    cin.ignore();
    cout << "Masukkan Nama = ";
    getline(cin, mhs[i].nama);
    cout << "Masukkan Alamat Desa = ";
    cin >> mhs[i].alamat.desa;
    cout << "Masukkan Alamat Kota = ";
    cin >> mhs[i].alamat.kota;
    }

    cout << endl;
    //Display Data Mahasiswa
    cout << "Data Mahasiswa" << endl;
}