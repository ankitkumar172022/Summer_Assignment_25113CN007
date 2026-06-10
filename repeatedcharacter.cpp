#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number = ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        char ch=(char)(64+i);
        for(int j=1;j<=i;j++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
}