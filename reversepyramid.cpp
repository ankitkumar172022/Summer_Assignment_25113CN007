#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows = ";
    cin>>n;
    int nst=2*n-1;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=i-1;k++)
        {
        cout<< " ";
        }
        for(int j=1;j<=nst;j++)
        {
        cout<< "*";
        }
        nst=nst-2;
        cout<<endl;
    }
}