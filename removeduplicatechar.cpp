#include <iostream>
#include <string>
using namespace std;
string removeDuplicates(string s){
    string result = "";
    bool seen[256] = {false};
    for(int i=0;i<s.length();i++) 
    {
        if(!seen[(unsigned char)s[i]]) 
        {
            result += s[i];
            seen[(unsigned char)s[i]] = true;
        }
    }
    return result;
}
int main(){
    string str;
    cout<<"Enter a string = ";
    cin>>str;
    cout<<"String after removing duplicates = "<<removeDuplicates(str)<<endl;
}
