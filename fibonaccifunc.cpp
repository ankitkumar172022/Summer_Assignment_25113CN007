#include<iostream>
using namespace std;
int fibonacci(int n)
{   
    int sum=0,a=1,b=1;
    for(int i=2;i<=n;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    return a;
}
int main(){
    int n;
    cout<<"enter term = ";
    cin>>n;
    int f=fibonacci(n);
    cout<<"the fibonacci term is "<<f;
}