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
    mahasiswa mhs[2];

    for(int i = 0; i < 2; i++){
    cout << "Mahasiswa ke-" << i+1 << endl;
    cout << "Mahasiswa NIM =";
    cin >> mhs[1].nim;
    cin.ignore();
    cout << "Mahasiswa Nama =";
    getline(cin, mhs[1].nama);
