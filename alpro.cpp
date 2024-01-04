#include <iostream>
using namespace std;
int main(){
    cout << " Program Menghitung Gaji Karyawan " << endl;
    cout << "-----------------------------------" << endl;

string nama;
char golongan;
int jam_kerja, upah_per_jam, total_upah;
//proses input
cout << "Nama Karyawan :";
cin >> nama;

cout << "golongan :";
cin >> golongan;

cout << "jumlah jam kerja: ";
cin >> jam_kerja;

// menentukan upah perjam berdasarkan golongan
switch (golongan){
    case 'A' :
    upah_per_jam = 5000;
    break;
    case 'B' :
    upah_per_jam = 7000;
    break;
    case 'C' :
    upah_per_jam = 8000;
    break;
    case 'D' :
    upah_per_jam = 10000;
    break;
}
    total_upah = upah_per_jam * jam_kerja;
    // mengecek apakah jam kerja lebih dari 48 jam
    if ( (jam_kerja - 48)>0){
        total_upah = total_upah + ((jam_kerja - 48)*4000);
    }
    // proses output
    cout<<endl;
    cout<<nama<<" menerima upah Rp. "<< total_upah << "per minggu";
    cout<<endl;
    return 0;

}