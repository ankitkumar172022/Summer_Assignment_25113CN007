#include <iostream>
#include <string>
using namespace std;
int countWords(string s){
    int count=0;
    bool inWord=false;
    for(int i=0;i<s.length();i++) 
    {
        if(s[i]==' ' || s[i]=='\t' || s[i]=='\n') 
        {
            inWord=false;
        } 
        else 
        {
            if(!inWord) 
            {
                count++;
                inWord=true;
            }
        }
    }
    return count;
}
int main(){
    string sentence;
    cout<<"Enter a sentence = ";
    getline(cin,sentence);
    cout<<"Total words = "<<countWords(sentence)<<endl;
}
