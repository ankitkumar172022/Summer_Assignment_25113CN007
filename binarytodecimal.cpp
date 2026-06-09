#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,i=0,d,s=0;
    cout<<"enter your binary number = ";
    cin>>n;
    while(n>0)
    {
        d=n%10;
        s=s+(d*pow(2,i));
        n=n/10;
        i++;
    }
    cout<<s;
}