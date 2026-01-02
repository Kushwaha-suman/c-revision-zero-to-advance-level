// 2. Find maximum and minimum number in array
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of array";
    cin>>n;
    int arr[n];
    cout<<"element are"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max)max=arr[i];
        if(arr[i]<min)min=arr[i];

    }
   cout<<"maximum_array ="<<max<<endl;
   cout<<"minimum_arry ="<<min<<endl;
    return 0;
}