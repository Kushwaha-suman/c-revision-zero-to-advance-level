// • Calculate simple interest from P, T, R.

#include <iostream>
using namespace std;
int main(){
    float p,t,r;
    cout<<"Enter principal amount.";
    cin>>p;
    cout<<"enter rate ";
    cin>>r;
    cout<<"enter time ";
    cin>>t;
    float simple_intrest = (p*t*r)/100;
    cout<<"simple intrest ="<<simple_intrest<<endl;
    return 0;
}