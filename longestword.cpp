#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(){
    string sentence;
    cout<<"Enter a sentence = ";
    getline(cin,sentence);
    string word,longestWord="";
    stringstream ss(sentence);
    while(ss>>word) 
    {
        if(word.length() > longestWord.length()) 
        {
            longestWord = word;
        }
    }
    cout<<"Longest word = "<<longestWord<<endl;
}
