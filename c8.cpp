//Search and Replace a Word
#include<iostream> 
#include<string> 
using namespace std; 
int main(){ 
    string sentence, oldWord, newWord; 
    cout << "Enter a sentence: "; 
    getline(cin, sentence); 
    cout << "Enter word to replace: "; 
    getline(cin, oldWord); 
    cout << "Enter new word: "; 
    getline(cin, newWord); 
    size_t position = sentence.find(oldWord); 
    if(position != string::npos){ 
        sentence.replace(position, oldWord.length(), newWord);
        cout << "Updated Sentence: " << sentence;
    }
    else{ 
        cout << "Word not found"; 
    } 
    return 0; 
} 