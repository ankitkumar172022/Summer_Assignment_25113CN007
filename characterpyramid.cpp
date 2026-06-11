#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows = ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
        cout<< " ";
        }
        for (char ch='A';ch<'A'+i;ch++) 
        {
        cout<< ch;
        }
        for (char ch ='A'+i-2;ch>='A';ch--)
        {
        cout<< ch;
        }
        cout<<endl;
    }
}