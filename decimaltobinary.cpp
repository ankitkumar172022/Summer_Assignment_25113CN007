#include<iostream>
using namespace std;
int main(){
    int n,d,s=0,r=0,t,e;
    cout<<"enter your number = ";
    cin>>n;
    t=n;
    while(n>0)
    {
        d=n%2;
        s=(s*10)+d;
        n=n/2;
    }
    while(s>0)
    {
        e=s%10;
        r=(r*10)+e;
        s=s/10;
    }
    cout<<"the binary conversion of the decimal number "<<t<<" is "<<r;
}