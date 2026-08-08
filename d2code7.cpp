//Calculate percentage. 
#include <iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"Enter the maximum number:";
    cin>>a;
    cout<<"Enter a number within the rage of 0 to the maximum number: ";
    cin>>b;
    cout<<"The percentage is "<<(b*100)/a<<"%";
    return 0;
}