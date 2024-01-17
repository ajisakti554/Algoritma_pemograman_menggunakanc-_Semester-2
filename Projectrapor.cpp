// KELOMPOK 1
// Budi Kurnia
// Fadlhi Jahfal
// Aji Sakti Saputra
// Muhammad Musa Ibrahim

   //MEMBUAT PROGRAM NILAI RAPORT//

#include<iostream>
using namespace std;
int main(){
    cout<<" ____________________________________________________________________________________" <<endl;
    cout<<"|     Identitas            |      Program Nilai Rapor         |        Jumlah        |"<<endl;
    cout<<"|____________________________________________________________________________________|"<<endl;

    //deklarasi variable

    string nama,nrp;
    float nilai_uas,predikat,tugas_harian,absensi,nilai_uts,nilai_akhir;
    char nilai_huruf;

    //input

    cout<<"||Masukan Nama             |    ";
    cin>>nama;
    cout<<"______________________________________________________________|______________________|" <<endl;

    cout<<"|| Masukan NRP             |    ";
    cin>>nrp;
    cout<<"______________________________________________________________|______________________|" << endl;
    cout<<"|| Masukkan Nilai Absensi  |    ";
    cin>>absensi;    
    cout<<"______________________________________________________________|______________________|"<< endl;
    cout<<"|| Masukkan Nilai Tugas    |    ";
    cin>> tugas_harian;
    cout<<"______________________________________________________________|______________________|" << endl;
    cout<<"|| Masukkan Nilai UAS      |    ";
    cin>>nilai_uas;
    cout<<"______________________________________________________________|______________________|" <<endl;
    cout<<"|| Masukkan Nilai UTS      |    ";
    cin>>nilai_uts;
    cout<<"||____________________________________________________________|______________________|" <<endl;

    //menghitung nilai

    nilai_akhir=((absensi*0.2)+(tugas_harian*0.2)+(nilai_uas*0.4)+(nilai_uts*0.2));
    if ((nilai_akhir>=85))
      nilai_huruf='A';
    else if((nilai_akhir>=70))
      nilai_huruf='B';
    else if((nilai_akhir>=40))
      nilai_huruf='C';
    else if((nilai_akhir>=20))
      nilai_huruf='D';
    else 
    nilai_huruf='E';
    
    //output

    cout<<"||_________________________|____________________________ Maka nilai akhirnya  : "<<nilai_akhir<<endl;
    cout<<"||_________________________|____________________________ Maka perdikatnya     : "<<nilai_huruf <<endl;


    cout<<endl;
    cout<<"                           (Dihitung berdasarkan nilai rata rata)"                    ;
    return 0;
}