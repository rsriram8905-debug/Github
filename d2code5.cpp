//Convert Fahrenheit to Celsius. 
#include <iostream>
using namespace std;
int main(){
    float a;
    cout<<"Enter the temp in Fahrenheit: ";
    cin>>a;
    cout<<"The temperature "<<a<<"F in Celsius is "<<(a-32)*(5/9)<<"C";
    return 0;
}