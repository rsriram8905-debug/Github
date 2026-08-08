//reversing an array
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
    cout<<"The array in reverse is:"<<endl;
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}