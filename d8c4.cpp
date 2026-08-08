//Maximum of array
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
    int max=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"The maximum value is: "<<max;
    return 0;
}