#include<iostream>
using namespace std;
int main(){
    int n,factorial=1;
    cout<<"enter your number = ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        factorial*=i;
    }
    cout<<"the factorial of "<< n <<" is = "<<factorial;
}