//Compare Two Strings 
#include<iostream> 
#include<string> 
using namespace std; 
int main(){
    string first, second; 
    cout << "Enter first string: "; 
    getline(cin, first); cout << "Enter second string: "; 
    getline(cin, second); 
    if(first == second) cout << "Strings are equal"; 
    else cout << "Strings are not equal"; 
    return 0;
} 