#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string ="<<endl;
    cin>>s;
    int freq[256]={0};
    char ans='0';
    for(int i=0;i<s.size();i++)
    {
        freq[(int)s[i]]++;
        if(freq[(int)s[i]]>1)
        {
            ans=s[i];
            break;
        }
    }
    if(ans!='0')
    {
        cout<<"First repeating character is = "<<ans<<endl;
    }
    else
    {
        cout<<"No repeating character found"<<endl;
    }
}
