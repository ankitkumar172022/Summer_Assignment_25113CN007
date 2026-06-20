#include<iostream>
using namespace std;
int checkprime(int n)
{    
    if(n<=1) return 0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cout<<"enter your number = ";
    cin>>n;
    int p=checkprime(n);
    if(p==1)
    {
        cout<<"number is prime";
    }
    else
    {
        cout<<"number is composite";
    }
}