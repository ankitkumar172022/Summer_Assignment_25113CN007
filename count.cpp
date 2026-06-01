#include<iostream>
using namespace std;
int main(){
    int n,d,count=0;
    cout<<"enter your number = ";
    cin>>n;
    while(n>0)
    {
        d=n%10;
        count++;
        n=n/10;
    }
    cout<<"the number of digits in the number is = "<<count;
}