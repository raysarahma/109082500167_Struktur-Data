#include <iostream>
using namespace std;

int main() {
    int angka;
    string nama[] = {"nol", "satu", "dua", "tiga", "empat",
                     "lima", "enam", "tujuh", "delapan", "sembilan"};

    cout << "Masukkan angka : ";
    cin >> angka;

    cout << angka << " : ";

    if (angka < 10) {
        cout << nama[angka];
    }
    else if (angka == 10) {
        cout << "sepuluh";
    }
    else if (angka == 11) {
        cout << "sebelas";
    }
    else if (angka < 20) {
        cout << nama[angka - 10] << " belas";
    }
    else if (angka < 100) {
        cout << nama[angka / 10] << " puluh";

        if (angka % 10 != 0)
            cout << " " << nama[angka % 10];
    }
    else {
        cout << "seratus";
    }

    return 0;
}