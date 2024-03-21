//Kelompok 3
//Fitri Fatimah
//Aji Sakti
//Ahmad Muwafiqul



#include <iostream>
#include <string.h>
using namespace std;

struct book {
    int kode,tahunTerbit;
    char judul[50];
    string pengarang, isbn;
  
} perpus[100];


int Buku = 0;
void tambahkanbuku() {
    system("cls");
    cout << "Tambahkan buku baru....."<<endl;
    perpus[Buku].kode = Buku + 1;
    cout << "Masukkan judul  : " ;
    cin.ignore();
    cin.getline(perpus[Buku].judul, 50);

    cout << "Masukkan nama pengarang : ";
    cin >> perpus[Buku].pengarang;

    cout << "Masukkan Tahun terbit : ";
    cin >> perpus[Buku].tahunTerbit;

    cout << "Masukkan Nomor ISBN : ";
    cin >> perpus[Buku].isbn;
    Buku++;

    cout << "\n BUKU BERHASIL DITAMBAHKAN";
    cout << endl;
    system("pause");

    }

    // output dan input menampilkan daftar buku
void tampilkanbuku() {
    system("cls");
    cout << "Daftar semua buku diperpustakaan:\n\n";
    if (Buku == 0) {
        cout << "Buku tidak ditemukan.\n";
    } else {
        for (int i = 0; i < Buku; i++) {
            cout << "Kode: " << perpus[i].kode << endl;
            cout << "Judul: " << perpus[i].judul << endl;
            cout << "Pengarang: " << perpus[i].pengarang << endl;
            cout << "Tahun Terbit: " << perpus[i].tahunTerbit << endl;
             cout << "Nomor ISBN: " << perpus[i].isbn << endl;
            cout << endl;
        }
    }
    system("pause");
}
   
// mencari buku
    void caribuku(){
        system("cls");
        cout << "Cari Buku\n"; 
        string judul;
        cout << "Masukkan judul buku : ";
        cin.ignore();
        getline(cin, judul);
        int found = 0;
        for(int i = 0; i < Buku; i++) {
            if(strcasecmp(perpus[i].judul, judul.c_str()) == 0) {
                cout << "\n Kode : " << perpus[i].kode << endl;
                cout << "\n Judul Buku : " << perpus[i].judul << endl;
                cout << "\n Nama pengarang : " << perpus[i].pengarang << endl;
                cout << "\n Tahun terbit : " << perpus[i].tahunTerbit << endl;
                cout << "\n Nomor ISBN : " << perpus[i].isbn << endl;
                found = 1;

            }
            }
            if(found == 0) {
                cout << "\n Mohon Maaf Buku Tidak terdaftar. \n";
            
            }
            system("pause");
        }

//		hapus buku
        void hapusbuku() {
            system("cls");
            cout << "Hapus buku"<<endl;
            int kode;
            cout << "Masukkan code buku : ";
            cin >> kode;
            int found = -1;
            for(int i = 0; i < Buku; i++) {
                if(perpus[i].kode == kode) {
                    found = i;
                    
                }
            }
            if(found == -1){
                cout << "Buku tidak ditemukan\n";

            }
            else {
                for(int i = found; i < Buku -1; i++) {
                    perpus[i] = perpus[i + 1];

                }
                Buku--;
                cout << "Buku berhasil dihapus";
                cout<<endl;

            }
            system("pause");
        }
        int keluar;
        void exit() {
    system("cls");
    if (keluar == 0) {
        cout << "Terima Kasih sudah memakai layanan Kami.\n";
        cin>>keluar;
    }}
 
// 		output untuk bagian menu

        int main() {
            int pilih;
            while (true) {
                system("cls");
                cout<<"--------------------------------------------\n";
                cout<< "SELAMAT DATANG DI PERPUSTAKAAN JATINANGOR \n";
				cout << "-------------------------------------------- \n";
                cout << "| 1. Tambah buku                           |"<<endl;
                 cout << "| 2. Tampilkan Buku                        |"<<endl;
                 cout << "| 3. Cari Buku                             | "<<endl;
                  cout << "| 4. Hapus Buku                            |"<<endl;
                   cout << "| 5. Keluar                                |"<<endl;
                    cout << "Pilih Operasi yg ingin dilakukan : ";
                    cin >> pilih;
                    switch(pilih) {
                        case 1:
                        tambahkanbuku();
                        break;
                        case 2:
                        tampilkanbuku();
                        break;
                        case 3:
                        caribuku();
                        break;
                        case 4:
                        hapusbuku();
                        break;
                        case 5:
                        exit();
                        break;
                        default:
                        cout << "Operasi tidak bisa dilakukan, Coba lagi kembali.";
                        system("pause");
                    }

             }
             return 0;
        }
    
