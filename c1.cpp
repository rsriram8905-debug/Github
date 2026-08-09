//Read and Display a Complete Sentence 
#include<iostream>
#include<string>
using namespace std;
int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    cout << "Sentence: " << sentence<<endl;
    cout << "Length: " << sentence.length();
    return 0;
} 