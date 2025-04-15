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
    cout << "Mahasiswa Alamat Desa =";
    cin >> mhs[1].alamat.desa;
    cout << "Mahasiswa Alamat Kota =";
    cin >> mhs[1].alamat.kota;
    }

    cout << endl;
    cout << "Data Mahasiswa" << endl;

    for(int i = 0; i < 2; i++){
    cout << "Data Mahasiswa ke-" << i+1 << endl;
    cout << "NIM =" << mhs[1].nim << endl;
    cout << "Nama =" << mhs[1].nama << endl;
    cout << "Alamat Desa =" << mhs[1].alamat.desa << endl;
    cout << "Alamat Kota =" << mhs[1].alamat.kota << endl;
    }
}
