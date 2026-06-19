#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array = ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array"<< endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int last=arr[n-1];
    for(int i=n-1;i>0;i--) 
    {
    arr[i]=arr[i-1];
    }
    arr[0]=last;
    cout<<"array after right rotation"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
