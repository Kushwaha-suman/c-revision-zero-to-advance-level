// 5. Reverse an array without using another array

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter size: ";
    cin >> N;

    int arr[N];

    cout << "Enter elements: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Reverse in place
    int start = 0;
    int end = N - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
