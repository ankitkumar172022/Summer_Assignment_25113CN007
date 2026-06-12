#include<iostream>
using namespace std;
int armstrong(int n)
{
    int d,s=0;
    int t=n;
    while(n>0)
    {
        d=n%10;
        s=s+(d*d*d);
        n=n/10;
    }
    if(t==s)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(){
    int n;
    cout<<"enter your number = ";
    cin>>n;
    int a=armstrong(n);
    if(a==1)
    {
        cout<<"armstrong number";
    }
    else
    {
        cout<<"not a armstrong number";
    }
}