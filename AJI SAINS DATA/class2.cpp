#include <iostream>
#include <string>

class barca {
    // Bagian private hanya dapat diakses oleh member functions dalam kelas ini
private:
    std::string nama,asal;
    int nopunggung;

    // Bagian public dapat diakses dari luar kelas
public:
    // Konstruktor untuk menginisialisasi objek Mahasiswa
    barca(std::string n, int u,std::string m) {
        nama = n;
        nopunggung = u;
        asal = m;
        
    }

    // Setter untuk mengatur nama
    void setNama(std::string n) {
        nama = n;
    }

    // Getter untuk mendapatkan nama
    std::string getNama() {
        return nama;
    }

    // Setter untuk mengatur umur
    void setNo_punggung(int u) {
        nopunggung = u;
    }

    // Getter untuk mendapatkan umur
    int getNo_punggung() {
        return nopunggung;
    }


   void setasal(std::string m) {
    asal = m;
   }
   std::string getasal(){
      return asal;
   }

    // Metode untuk menampilkan informasi Mahasiswa
    void tampilkanInfo() {
        std::cout << "Nama: " << nama <<std::endl<<"Asal :"<<asal<< " No Punggung : " <<nopunggung<<std::endl;
    }
};

int main() {
    // Membuat objek Mahasiswa
    barca b1 ("Lewandownski",7,"Polandia");

    // Menggunakan metode public untuk mengakses data private
    std::cout << "Nama Pemain :" << std::endl;
    b1.tampilkanInfo();

    // Mengubah nama dan umur menggunakan setter
    b1.setNama("Messi");
    b1.setNo_punggung(10);
    b1.setasal("Argentina");

     std::cout<<"nama"<<b1.getNama()<<std::endl;

    // Menampilkan informasi yang sudah diubah
    std::cout << "Nama Pemain 2:" << std::endl;
    b1.tampilkanInfo();

    return 0;
}
