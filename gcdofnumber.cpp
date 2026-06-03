#include<iostream>
using namespace std;
int main(){
    int a,b,gcd;
    cout<<"enter two number = ";
    cin>>a>>b;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    cout<<"gcd of the two number is "<<gcd;
}