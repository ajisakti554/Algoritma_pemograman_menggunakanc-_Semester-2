#include <iostream>
using namespace std;

// Base class
class Matematika {
public:
    Matematika() {
        cout << "Matematika constructor called." << endl;
    }

    void setAngka(int a) {
        angka_ = a;
    }

protected:
    int angka_;
};

// Derived class Kuadrat
class Kuadrat: public Matematika {
public:
    int hitungKuadrat() {
        return angka_ * angka_;
    }
};

// Derived class Kubus
class Kubus: public Matematika {
public:
    int hitungKubus() {
        return angka_ * angka_ * angka_;
    }
};

int main() {
    Kuadrat kuadrat;
    Kubus kubus;

    kuadrat.setAngka(5);
    kubus.setAngka(5);

    cout << "Hasil kuadrat: " << kuadrat.hitungKuadrat() << endl;
    cout << "Hasil kubus: " << kubus.hitungKubus() << endl;

    return 0;
}