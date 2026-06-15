#include<iostream>
using namespace std;
int main(){
    int p,b,n=1;
    cout<<"enter the base = ";
    cin>>b;
    cout<<"enter the power = ";
    cin>>p;
    for(int i=1;i<=p;i++)
    {
        n=n*b;
    }
    cout<<n;
}