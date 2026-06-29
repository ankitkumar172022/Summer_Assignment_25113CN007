#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter a number = ";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(n==sum)
    {
        cout<<"given number is a perfect number";
    }
    else
    {
        cout<<"given number is not a perfect number";
    }
}