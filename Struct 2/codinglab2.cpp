#include <iostream>
#include <string>

using namespace std;

//deklarasi 
struct Pegawai {
    string nama;
    string departemen;
    int gaji;
};
//fungsi menaikan gaji
void naikGaji(Pegawai& p) {
    p.gaji *=1.10;
}

int main() {
    Pegawai pegawai1 = {"Budi", "IT", 5000000};

    // output pegawai sebelum kenaikan gaji
    cout << "Informasi Pegawai Sebelum Kenaikan Gaji:" << endl;
    cout << "Nama: " << pegawai1.nama << endl;
    cout << "Departemen: " << pegawai1.departemen << endl;
    cout << "Gaji: " << pegawai1.gaji << endl;

    // Panggil fungsi naikGaji
    naikGaji(pegawai1);

    // Output pegawai setelah kenaikan gaji
    cout << "\nInformasi Pegawai Setelah Kenaikan Gaji:" << endl;
    cout << "Nama: " << pegawai1.nama << endl;
    cout << "Departemen: " << pegawai1.departemen << endl;
    cout << "Gaji: " << pegawai1.gaji <<endl;

    return 0;
}
