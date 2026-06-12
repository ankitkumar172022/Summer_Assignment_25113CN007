#include<iostream>
using namespace std;
int factorial(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
       f=f*i;
    }
    return f;
}
int main(){
    int n;
    cout<<"enter your number = ";
    cin>>n;
    int fac=factorial(n);
    cout<<"the factorial of the "<<n<<" is "<<fac;
}