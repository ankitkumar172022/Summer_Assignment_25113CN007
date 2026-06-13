#include<iostream>
using namespace std;
int main(){
    int n,d,s=0,t;
    cout<<"enter a three digit number = ";
    cin>>n;
    t=n;
    while(n>0)
    {
        d=n%10;
        s=s+(d*d*d);
        n=n/10;
    }
    if(t==s)
    {
        cout<<"armstrong number";
    }
    else
    {
        cout<<"not a armstrong number";
    }
}