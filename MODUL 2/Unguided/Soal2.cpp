#include <iostream>
using namespace std;

void kuadratkan(int &x) {
    x = x * x;
}

int main() {
    int angka = 5;
    cout << "Nilai awal: " << angka << endl;
    kuadratkan(angka);
    cout << "Nilai setelah dikuadratkan: " << angka << endl;
    return 0;
}
