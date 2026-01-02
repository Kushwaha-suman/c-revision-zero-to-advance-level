// 3. Find sum of all elements of array

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter size: ";
    cin >> N;

    int arr[N];
    int sum = 0;

    cout << "Enter elements: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
