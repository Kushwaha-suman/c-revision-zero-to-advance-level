// 3. Print sum of first N natural numbers
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    int sum = 0;

    for (int i = 1; i <= N; i++) {
        sum += i;   // add i to sum
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
