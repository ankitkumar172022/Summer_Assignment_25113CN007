#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1,s2;
    cout<<"Enter first string = ";
    cin>>s1;
    cout<<"Enter second string = ";
    cin>>s2;
    int freq1[256]={0},freq2[256]={0};
    for(int i=0;i<s1.size();i++)
    {
        freq1[(int)s1[i]]++;
    }
    for(int i=0;i<s2.size();i++)
    {
        freq2[(int)s2[i]]++;
    }
    cout<<"Common characters = ";
    for(int i=0;i<256;i++)
    {
        if(freq1[i]>0 && freq2[i]>0)
        {
            cout<<(char)i<<" ";
        }
    }
}
