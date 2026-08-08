//Linear search
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
    int search;
    cout<<"Enter the number: ";
    cin>>search;
    int flag;
    for(int i=0; i<n; i++){
        if(arr[i]==search){
            cout<<"The number "<<search<<" is at position "<<i;
            flag=1;
            break;
        }
        else{
            flag=0;
        }
    }
    if(flag==0){
        cout<<"The element "<<search<<" is not in the array";
    }
    return 0;
}
