#include<iostream>
using namespace std;
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
      f=f*i;
    }
    return f;
}
int main(){
    int n,d,s=0,t;
    cout<<"enter a number = ";
    cin>>n;
    t=n;
    while(n>0)
    {
        d=n%10;
        s=s+fact(d);
        n=n/10;
    }
    if(t==s)
    {
        cout<<"given number is a strong number";
    }
    else
    {
        cout<<"given number is not a strong number";  
    }
}

