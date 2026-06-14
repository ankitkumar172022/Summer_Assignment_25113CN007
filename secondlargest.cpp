#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array = ";
    cin>>n;
    int arr[n];
    cout<<"enter the element of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int smax=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=max && arr[i]>smax)
        {
            smax=arr[i];
        }
    }
    cout<<"the second largest element is = "<<smax;
}