//Minimum element of an array
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
    int min=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"The minimum value is: "<<min;
    return 0;
}