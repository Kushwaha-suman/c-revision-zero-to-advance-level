// • Find the remainder when a user enters two numbers.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers:\n";
    cin>>a>>b;
    int rem = a%b;
    cout<<"Remainder ="<<rem<<endl;
    return 0;
}