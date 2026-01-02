// 4. Count even and odd numbers in an array

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number of array";
    cin>>n;
    int evencount=0;
int oddcount=0;

    int arr[n];
    cout<<"enter the element of arrays";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0)
        evencount++;
        else
        oddcount++;
    }
cout<<"total even count ="<<evencount<<endl;
cout<<"total odd count ="<<oddcount;
return 0;
}
