#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter your number = ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"the sum of "<< n <<" natural number is = "<<sum;
}