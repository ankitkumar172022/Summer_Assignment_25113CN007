#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the range of the array = ";
    cin>>n;
    int arr[n];
    cout<<"enter the element of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int brr[n];
    for(int i=0;i<n;i++)
    {
        brr[i]=arr[n-1-i];
    }
    cout<<"the reverse of the array is"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<brr[i]<<endl;
    }
}