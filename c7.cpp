//Count Vowels, Digits, Spaces and Special Characters
#include<iostream> 
#include<string> 
#include<cctype> 
using namespace std;  
int main(){     
    string text;     
    int vowels = 0;     
    int consonants = 0;    
    int digits = 0;     
    int spaces = 0;     
    int special = 0;      
    cout << "Enter a sentence: ";     
    getline(cin, text);      
    for(char ch : text){         
        if(isalpha(ch)){             
            ch = tolower(ch);              
            if(ch == 'a' || ch == 'e' || ch == 'i' ||  ch == 'o' || ch == 'u'){
                vowels++;
            }            
            else{
                consonants++;         
            }
        }         
        else if(isdigit(ch)){
            digits++;
        }
        else if(isspace(ch)){
            spaces++;}
        else{ 
            special++; 
        }
    } 
        cout << "Vowels: " << vowels << endl; 
        cout << "Consonants: " << consonants << endl; 
        cout << "Digits: " << digits << endl; 
        cout << "Spaces: " << spaces << endl; 
        cout << "Special Characters: " << special; 
        return 0;
}
