#include <iostream>
 using namespace std;

 class Number1{
    private:
    int y;
    public :
    void setnumber(int a){
        y=a;

    }
    int getnumber(){
        return y;
    }
    };

class Number2{
    public:
    int x;
   
 };

 int main(){
    Number1 satu;
    Number2 dua;
    satu.setnumber(25);
    dua.x=30;
    cout<<"y "<<satu.getnumber();
    cout<<"x"<<dua.x<< endl;


    return 0;
    
 }