// 1. Input N numbers in array and print them

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter" << n << "number" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "you entered"<<endl; for (int i = 0; i < n; i++)
    {
        cout << arr[i];" ";
    }
    return 0;
}