#include<iostream>
using namespace std;
int maximum(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main(){
    int a,b;
    cout<<"enter two number = ";
    cin>>a>> b;
    int max=maximum(a,b);
    cout<<"the maximum of two number is "<<max;
}