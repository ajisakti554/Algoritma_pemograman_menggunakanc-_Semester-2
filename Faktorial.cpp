#include <iostream>
using namespace std;

long long faktorial(int n){
    if(n == 1){
        cout << n;
        return 1;
    }
    else
    {
        cout << "" << n << " x " ;
        return n * faktorial(n-1);
    }
}

int main (){
    int angka ;
    long long hasil;
    cout << "\t Bilangan faktorial "<<endl<<endl;
    cout << " Masukan angka :  ";
    cin >> angka ;
    cout<<angka<<"!= ";
    
    hasil = faktorial(angka);
    cout<<endl<<endl;
    cout << " Hasil faktorial  :  " << hasil ;

    return 0;
}


