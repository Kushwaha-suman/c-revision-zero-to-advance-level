// Diamond pattern

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    // Upper part
    for (int i = 1; i <= N; i++) {
        for (int s = 1; s <= N - i; s++)
            cout << " ";
        for (int star = 1; star <= 2*i - 1; star++)
            cout << "*";
        cout << endl;
    }

    // Lower part
    for (int i = N - 1; i >= 1; i--) {
        for (int s = 1; s <= N - i; s++)
            cout << " ";
        for (int star = 1; star <= 2*i - 1; star++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
