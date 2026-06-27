#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of words = ";
    cin>>n;
    vector<string> words(n);
    cout<<"Enter words = ";
    for(int i=0;i<n;i++)
    {
        cin>>words[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(words[i].length()>words[j].length())
            {
                string temp=words[i];
                words[i]=words[j];
                words[j]=temp;
            }
        }
    }
    cout<<"Words sorted by length = ";
    for(int i=0;i<n;i++)
    {
        cout<<words[i]<<" ";
    }
}
