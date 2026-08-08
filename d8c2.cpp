//Sum of elements in arrays
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
    int sum=0;
    for(int i=0; i<n; i++){
      sum+=arr[i];
    }  
    cout<<"The sum is "<<sum;
    return 0;
}