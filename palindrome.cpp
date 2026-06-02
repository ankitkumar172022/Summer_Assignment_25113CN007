#include<iostream>
using namespace std;
int main(){
    int n,r=0,d,t;
    cout<<"enter your number = ";
    cin>>n;
    t=n;
    while(n>0)
    {
       d=n%10;
       r=(10*r)+d;
       n=n/10;
    }
    if(t==r)
    {
        cout<<"number is a palindrome";
    }
    else
    {
        cout<<"number is not a palindrome";
    }
}