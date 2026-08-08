//Take array from user and print
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
    cout<<"The array is:"<<endl;
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}