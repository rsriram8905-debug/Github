//Concatenate Two Strings 
#include<iostream>
#include<string>
using namespace std;
int main(){
    string firstName, lastName; 
    cout << "Enter first name: "; 
    getline(cin, firstName); 
    cout << "Enter last name: "; 
    getline(cin, lastName); 
    string fullName = firstName + " " + lastName; cout << "Full Name: " << fullName; 
    return 0; 
}