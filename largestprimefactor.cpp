#include<iostream>
#include<math.h>
using namespace std;
int isprime(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main(){
    int n,s;
    cout<<"enter a number = ";
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(isprime(i))
        {
           if(n%i==0)
           {
             s=i;
           }
        }
    }
    cout<<"the largest prime factor of "<<n<<" is "<<s;
}