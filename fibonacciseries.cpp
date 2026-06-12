#include<iostream>
using namespace std;
int main(){
    int a=1,b=1,sum=0,n;
    cout<<"enter your term = ";
    cin>>n;
    cout<<"the fibonacci series is :"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<" ";
        sum=a+b;
        a=b;
        b=sum;
    }
}