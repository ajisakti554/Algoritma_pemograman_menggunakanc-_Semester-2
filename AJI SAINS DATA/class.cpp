#include <iostream>
#include <string>

class robot {
    // Bagian private hanya dapat diakses oleh member functions dalam kelas ini
private:
    std::string nama,mbti;
    int umur;

    // Bagian public dapat diakses dari luar kelas
public:
    // Konstruktor untuk menginisialisasi objek Mahasiswa
    robot(std::string n, int u,std::string m) {
        nama = n;
        umur = u;
        mbti= m;
        
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
    void setUmur(int u) {
        umur = u;
    }

    // Getter untuk mendapatkan umur
    int getUmur() {
        return umur;
    }


   void setmbti(std::string m) {
    mbti = m;
   }
   std::string getmbti(){
      return mbti;
   }

    // Metode untuk menampilkan informasi Mahasiswa
    void tampilkanInfo() {
        std::cout << "Nama: " << nama <<std::endl<< ", Umur: " << umur <<std::endl<<"mbti :"<<mbti<< std::endl;
    }
};

int main() {
    // Membuat objek Mahasiswa
    robot r1("Amelia",20,"istj");

    // Menggunakan metode public untuk mengakses data private
    std::cout << "Nama Mahasiswa 1:" << std::endl;
    r1.tampilkanInfo();

    // Mengubah nama dan umur menggunakan setter
    r1.setNama("ryan");
    r1.setUmur(21);
    r1.setmbti("istj");

     std::cout<<"nama"<<r1.getNama()<<std::endl;

    // Menampilkan informasi yang sudah diubah
    std::cout << "Nama Mahasiswa 2:" << std::endl;
    r1.tampilkanInfo();

    return 0;
}
