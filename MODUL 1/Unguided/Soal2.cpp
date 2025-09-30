#include <iostream>
#include <string>
using namespace std;

string satuan[] = {"nol","satu","dua","tiga","empat","lima","enam","tujuh","delapan","sembilan"};
string belasan[] = {"sepuluh","sebelas","dua belas","tiga belas","empat belas","lima belas","enam belas","tujuh belas","delapan belas","sembilan belas"};
string puluhan[] = {"", "", "dua puluh","tiga puluh","empat puluh","lima puluh","enam puluh","tujuh puluh","delapan puluh","sembilan puluh"};

string terbilang(int n) {
    if (n < 10) return satuan[n];
    else if (n < 20) return belasan[n-10];
    else if (n < 100) {
        int puluh = n / 10;
        int sisa = n % 10;
        if (sisa == 0) return puluhan[puluh];
        else return puluhan[puluh] + " " + satuan[sisa];
    } else if (n == 100) return "seratus";
    return "di luar jangkauan";
}

int main() {
    int x;
    cout << "Masukkan angka (0-100): ";
    cin >> x;
    cout << x << " : " << terbilang(x) << endl;
    return 0;
}
