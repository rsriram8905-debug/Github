//Count Occurrences of a Substring 
#include<iostream> 
#include<string> 
using namespace std; 
int main(){ 
    string text, word; 
    int count = 0;      
    cout << "Enter main string: ";     
    getline(cin, text);      
    cout << "Enter substring: ";     
    getline(cin, word);      
    if(word.empty()){         
        cout << "Substring cannot be empty";
        return 0;
    }      
    size_t position = 0;      
    while((position = text.find(word, position)) != string::npos){         
        count++;         
        position += word.length();     
    }      
    cout << "Occurrences: " << count;      
    return 0; 
} 