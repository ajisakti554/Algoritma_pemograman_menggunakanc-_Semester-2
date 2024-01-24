#include <iostream>

using namespace std;

int main () {
    int nilai [3] = {85, 70, 75};
    int i;

    cout << "Index Sebelum: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Nilai[" << i << "] = " << nilai [i] << endl;
    }

    i = 0;
    nilai [i] = 20;
    cout << endl;
    cout << "Index Setelah: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Nilai[" << i << "] = " << nilai[i] << endl;
    }

    return 0;
}