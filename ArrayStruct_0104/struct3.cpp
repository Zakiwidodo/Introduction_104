#include <iostream>
#include <string>
using namespace std;

struct detailAlamat{
    string desa;
    string kota;

};

struct mahasiswa{
    string nim;
    string nama;
    detailAlamat alamat;
};

int main(){
    mahasiswa mhs;
    
    cout << "Masukan NIM = ";
    cin >> mhs.nim;
    cin.ignore();
    cout << "Masukan Nama = ";
    getline(cin, mhs.nama);
    cout << "Masukan Alamat Desa =";
