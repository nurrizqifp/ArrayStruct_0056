#include <iostream>
using namespace std;

//membuat struct mahasiswa
struct mahasiswa{
    string nim;
    string nama;
    string alamat;
};

int main(){
    //membuat objek mhs untuk struct mahasiswa pada program utama
    mahasiswa mhs;

    mhs.nim = "2024014001";
    mhs.nama = "Abra";
    mhs.alamat = "Kasihan";

    cout << "Masukkan NIM = ";
    cin >> mhs.nim;
    cout << "Masukkan Nama = ";
    cin >> mhs.nama;
    cout << "Masukkan Alamat = ";
    cin >> mhs.alamat;

    cout << endl;
    cout << "Data Mahasiswa" << endl;
    
    cout << "NIM = " << mhs.nim << endl;
    cout << "Nama = " << mhs.nama << endl;
    cout << "Alamat = " << mhs.alamat << endl;
}