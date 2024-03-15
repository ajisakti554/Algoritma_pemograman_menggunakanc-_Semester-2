#include<iostream>
using namespace std;

int main(){

    int bilangan, jumlah=0;
    cout<<"Masukan  Bilangan :";
    cin>>bilangan;
    
    while (bilangan>0){
jumlah++;
        bilangan=bilangan/10;
    }

     cout<<"jumlah digit bilangan tersebut adalah "<<jumlah<<" digit "<<endl;
    return 0;

}


