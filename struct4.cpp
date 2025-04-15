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

    for(int i = 0; i < 2; i++){ //perulangan untuk mengulangi sebanyak index array
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
    
    for (int i = 0; i < 2; i++) { //perulangan untuk display
    cout << "Data Mahasiswa ke-" << i+1 << endl;
    cout << "NIM = " << mhs[i].nim << endl;
    cout << "Nama = " << mhs[i].nama << endl;
    cout << "Alamat Desa = " << mhs[i].alamat.desa << endl;
    cout << "Alamat Kota = " << mhs[i].alamat.kota << endl;
    }
}