#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string s) 
{
    int i=0;
    int j=s.length()-1;
    while(i<j) {
        if(s[i]!=s[j]) 
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    string str;
    cout<<"Enter a string = ";
    cin>>str;
    if(isPalindrome(str)) 
    {
        cout<<"Given string is a palindrome"<<endl;
    } 
    else 
    {
        cout<<"Given string is not a palindrome"<<endl;
    }
}
