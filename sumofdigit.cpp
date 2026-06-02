#include<iostream>
using namespace std;
int main(){
    int n,sum=0,d;
    cout<<"enter your number = ";
    cin>>n;
    while(n>0)
    {
       d=n%10;
       sum+=d;
       n=n/10;
    }
    cout<<"the sum of the digit of the number is "<<sum;
}