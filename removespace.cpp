#include <iostream>
#include <string>
using namespace std;
string removeSpaces(string s) 
{
    string result="";
    for(int i=0;i<s.length();i++) 
    {
        if(s[i]!=' ') 
        {
            result+=s[i];
        }
    }
    return result;
}
int main(){
    string str;
    cout<<"Enter a string = ";
    getline(cin,str);
    cout<<"String without spaces = "<<removeSpaces(str)<<endl;
}
