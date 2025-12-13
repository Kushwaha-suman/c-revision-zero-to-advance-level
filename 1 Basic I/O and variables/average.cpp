// Input three floating numbers and display their average.

#include <iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter three number:\n";
    cin>>a>>b>>c;
    float avg = (a+b+c)/3;
    cout<<"average ="<<avg<<endl;
    return 0;
}