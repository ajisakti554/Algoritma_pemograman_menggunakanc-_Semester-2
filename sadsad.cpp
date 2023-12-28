#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    //input nilai dari A1, A2
    int A1, A2;
    cout << " waktu mulai penggunaan  : ";
    cin >> A1;
    cout << " waktu akhir penggunaan  : " << endl;
    cin >> A2;

     // masukan data yang ada
    int durasi_jam;
    int durasi_menit;
    int durasi_detik;
    int tarif_perjam;//Rp.5000

    //hitung durasi dan penggunaan dan biaya total
    durasi_jam = A2 - A1 / 3600;// << 1jam * 60 menit
    durasi_menit = A2 - A1 *60 ; // << detik / 1 jam = 60 menit
    durasi_detik = A2 - A1 *3600;// <<1 jam * 60 m1enit = 3600 detik

    tarif_perjam = durasi_jam * 5000;
    //OUTPUT
    cout << "Durasi Penggunaan : "<< durasi_jam<< endl;
    cout << "jam   : " << durasi_jam <<" Jam" <<  endl;
    cout << "Menit : " << durasi_menit <<" Menit" <<  endl;
    cout << "Detik : " << durasi_detik << " Detik" << endl;
    cout << "Biaya totalnya adalah :Rp " << tarif_perjam;

    return 0;

}