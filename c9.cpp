//Check Whether Two Strings Are Anagrams 
#include<iostream> 
#include<string> 
#include<algorithm> 
#include<cctype> 
using namespace std; 
int main(){     
    string first, second;     
    string cleanFirst, cleanSecond;      
    cout << "Enter first string: ";     
    getline(cin, first);      
    cout << "Enter second string: ";    
    getline(cin, second);      
    for(char ch : first){         
        if(ch != ' ') cleanFirst += tolower(ch);     
    }      
    for(char ch : second){
        if(ch != ' ') cleanSecond += tolower(ch);
    }      sort(cleanFirst.begin(), cleanFirst.end());     
    sort(cleanSecond.begin(), cleanSecond.end());      
    if(cleanFirst == cleanSecond) cout << "Anagram";     
    else cout << "Not an Anagram"; 
    return 0; 
} 