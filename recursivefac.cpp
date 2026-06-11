#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==1) return 1;
    return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"enter your number = ";
    cin>>n;
    int fac=factorial(n);
    cout<<"the factorial of the number is "<<fac;
}