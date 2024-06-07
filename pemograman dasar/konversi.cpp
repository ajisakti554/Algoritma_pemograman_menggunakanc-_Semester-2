#include <iostream>
using namespace std;

int main() {
    int N, i;
    float suhu_C[N], suhu_F[N];

    cout << "Masukan jumlah suhu dalam celcius yang akan diubah ke fahrenheit: ";
    cin >> N;

    cout << "Masukan " << N << " suhu dalam celcius: ";
    for (i = 0; i < N; i++) {
        cin >> suhu_C[i];
    }

    for (i = 0; i < N; i++) {
        suhu_F[i] = (suhu_C[i] * 9 / 5) + 32;
    }

    cout << "Suhu dalam fahrenheit adalah: ";
    for (i = 0; i < N; i++) {
        cout << suhu_F[i] << " ";
    }
    cout << endl;

    return 0;
}