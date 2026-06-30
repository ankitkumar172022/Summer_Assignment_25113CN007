#include<iostream>
using namespace std;
int sumofdigit(int n)
{
    if(n==0) return 0;
    return n%10+sumofdigit(n/10);
}
int main(){
    int n;
    cout<<"enter your number = ";
    cin>>n;
    int sum=sumofdigit(n);
    cout<<"the sum of the digits is "<<sum;
}