#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter your number = ";
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count=1;
        }
    }
    if(count==0)
    {
        cout<<n<<" is prime";
    }
    else
    {
        cout<<n<<" is not prime";
    }
}