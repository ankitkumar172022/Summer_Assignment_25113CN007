#include<iostream>
using namespace std;
int main(){
    int a=1,b=1,sum=0,n;
    cout<<"enter your term = ";
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<a<<endl;
}