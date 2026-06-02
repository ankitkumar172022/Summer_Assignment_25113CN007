#include<iostream>
using namespace std;
int main(){
    int n,p=1,d;
    cout<<"enter your number = ";
    cin>>n;
    while(n>0)
    {
       d=n%10;
       p=p*d;
       n=n/10;
    }
    cout<<"the product of the digit of the number is "<<p;
}