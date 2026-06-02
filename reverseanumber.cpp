#include<iostream>
using namespace std;
int main(){
    int n,r=0,d;
    cout<<"enter your number = ";
    cin>>n;
    while(n>0)
    {
       d=n%10;
       r=(10*r)+d;
       n=n/10;
    }
    cout<<"the reverse of the number is "<<r;
}