#include<iostream>
using namespace std;
int palindrome(int n)
{   
    int d,r=0;
    int t=n;
    while(n>0)
    {
       d=n%10;
       r=(10*r)+d;
       n=n/10;
    }
    if(r==t)
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
    int p=palindrome(n);
    if(p==1)
    {
        cout<<"given number is a palindrome";
    }
    else
    {
        cout<<"given number is not a palindrome";
    }
}