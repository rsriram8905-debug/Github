//number of even and odd numbers in an array
#include <iostream>
using namespace std;
int main(){
    int arr[5];
    int n;
    int num;
    cout<<"Enter number of elements: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Enter a number:";
        cin>>num;
        arr[i]=num;
    }
    int count=0;
    int even=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            even+=1;
        }
    }
    cout<<"The number of even numbers is: "<<even<<endl;
    cout<<"The number of odd numbers is: "<<n-even; 
    return 0;
}