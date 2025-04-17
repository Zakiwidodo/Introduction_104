#include <iostream>
using namespace std;

int arr[20], B[20]; //array utama dan array bantu
int n;

void input()
{
    cout << "Masukkan Panjang element array : ";
    cin >> n;
    if (n<= 20)
         break;
    cout << "/nMaksiml panjang array adalah 20" << endl;
}