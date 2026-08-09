//Convert a String to Uppercase 
#include<iostream> 
#include<string> 
#include<cctype> 
using namespace std; 
int main(){
    string text; 
    cout << "Enter a string: "; 
    getline(cin, text); 
    for(char &ch : text) ch = toupper(ch); 
    cout << "Uppercase: " << text; 
    return 0; 
}