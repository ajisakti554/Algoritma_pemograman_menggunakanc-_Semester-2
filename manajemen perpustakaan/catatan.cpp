//KELOMPOK 3 ( AL-BAASITH)
//Fitri Fatimah
//Aji Sakti
//Ahmad mwfiqul



#include <iostream>
using namespace std;

//menginput data 

int main(){
    int a;
    cout<<" _________________________________________________________________" <<endl;
    cout<<"|     Identitas            |      Manajemen Perpustakaan         |"<<endl;
    cout<<"|________________________________________________________________|"<<endl;
    cout<<"1. Tambah Buku Baru"<<endl;
   cout<<"2. Tambah Daftar Buku Baru"<<endl;
   cout<<"3. Cari Buku"<<endl;
   cout<<"4. Hapus Buku"<<endl;
   cout<<"5. keluar"<<endl;

//memasukan data data (input) dengan menggunakan struct

    struct perpus{
  string tbukubaru, tdaftarbuku, caribuku,hapusbuku,keluar;
};
perpus mhs;
   mhs.tbukubaru="Buku telah berhasil ditambahkan kedalam Perpustakaan ";
   mhs.tdaftarbuku=" Judul: Harry Potter and the Philosopher's Stone\n Pengarang: J.K. Rowling\n Tahun Terbit: 1997\n Nomor ISBN: 978-0747532743\n";
   mhs.caribuku="Buku tidak ditemukan dalam perpustakaan";
   mhs.hapusbuku="Buku berhasil di hapus di perpustakaan";
   mhs.keluar="Terima kasih telah menggunakan program Manajemen Perpustakaan.";

string nama,judul,pengarang,tterbit,isbn;


//control flow (agar bisa menginput data data yg sudah di masukkan )dengan menggunakan case dan break
//menampilkan output sekaligus
cout <<"Pilih Operasi yg ingin dilakukan :";
cin>>a;
switch(a){
    case 1:
    cout<<"1. Tambah buku baru "<<endl;
    cout<<"Masukkan informasi buku baru :";
    cin>>nama;
    cout<<"Judul :";
    cin>>judul;
    cout<<"pengarang : ";
    cin>>pengarang;
    cout<<"tahun terbit :";
    cin>>tterbit;
    cout<<"Nomor ISBN :";
    cin>>isbn;
    cout<<endl;

    cout<<mhs.tbukubaru<<endl;
    //mengulang agar bisa memilih operasi yg lain
    cout<<"Apakah anda ingin memasukan informasi lain ?"<<endl<<endl;
    cout<<"Pilih operasi yang ingin dilakukan :";
    cin>>a;



    case 2:
    cout<<"2. Tampilkan Daftar Buku\n"<<endl;
    cout<< mhs.tdaftarbuku;
    cout<<endl;

 //mengulang agar bisa memilih operasi yg lain
cout<<"Apakah anda ingin memasukan informasi lain ?"<<endl<<endl;
    cout<<"Pilih operasi yang ingin dilakukan :";
    cin>>a;
    
    case 3:
    cout<<"3. Cari Buku\n"<<endl;
    cout<<"Masukkan Judul buku yang ingin dicari : ";
    cin >> judul;
    cout<<mhs.caribuku;
    cout<<endl<<endl;

 //mengulang agar bisa memilih operasi yg lain
    cout<<"Apakah anda ingin memasukan informasi lain ?"<<endl;
    cout<<"Pilih operasi yang ingin dilakukan :";
    cin>>a;

    case 4:
    cout<<"4. Hapus Buku\n "<<endl;
    cout<<"Masukkan Judul Buku yg ingin dihapus :";
    cin  >> judul;
    cout<<mhs.hapusbuku;

 //mengulang agar bisa memilih operasi yg lain
    cout<<"Apakah anda ingin memasukan informasi lain ?\n"<<endl;
    cout<<"Pilih operasi yang ingin dilakukan :";
    cin>>a;

    case 5:
    cout<<"5. Keluar"<<endl<<endl;
    cout<<mhs.keluar;
    default:
    cout<<"Operasi tidak terdaftar";
}

return 0;
}
//selesai
