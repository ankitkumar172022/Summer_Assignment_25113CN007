#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string="<<endl;
    cin>>s;
    int freq[256]={0};
    for(int i=0;i<s.size();i++)
    {
        freq[(int)s[i]]++;
    }
    char ans='0';
    int maxFreq=0;
    for(int i=0;i<s.size();i++)
    {
        if(freq[(int)s[i]]>maxFreq)
        {
            maxFreq=freq[(int)s[i]];
            ans=s[i];
        }
    }
    if(ans!='0')
    {
        cout<<"Maximum occurring character is = "<<ans<<endl;
        cout<<"It occurs = "<<maxFreq<<" times"<<endl;
    }
    else
    {
        cout<<"No character found"<<endl;
    }
}
