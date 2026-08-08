//Find the simple interest
#include <iostream>
using namespace std;
int main(){
    int P,R,T;
    cout<<"Enter P, R(in percent), T(in years): ";
    cin>>P>>R>>T;
    cout<<"The simple interest is I="<<(P*R*T)/100;
    return 0;
}