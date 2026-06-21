#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int main(){
    int a,b;
    cout<<"enter two number = ";
    cin>>a>> b;
    int s=add(a,b);
    cout<<"the sum of two number is "<<s;
}