#include <iostream>
#include <string>

class barca {

public:

std::string nama;
int nopunggung;
std::string asal;

    void barcelona(){
    std::cout<<"Nama :"<<nama<<std::endl;
    std::cout<<"No punggung :"<<nopunggung<<std::endl;
    std::cout<<"Asal :"<<asal<<std::endl;
    }
};
int main() {
   
    barca b1;


    b1.nama="Lewandownski";
    b1.nopunggung=7;
    b1.asal="Argentina";
    b1.barcelona();

    return 0;

}
