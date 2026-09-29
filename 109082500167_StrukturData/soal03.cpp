#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i > 0; i--) {
        for (int s = n; s > i; s--)
            cout << "  ";

        for (int j = i; j > 0; j--)
            cout << j << " ";

        cout << "* ";

        for (int j = 1; j <= i; j++)
            cout << j << (j == i ? "" : " ");

        cout << endl;
    }

    for (int i = 0; i < n; i++)
        cout << "  ";

    cout << "*";

    return 0;
}