#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the range of the array = ";
    cin>>n;
    int arr[n];
    cout<<"enter the element of the array = "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {   
        int min=INT_MAX;
        int minidx=-1;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                minidx=j;
            }
        }
        int temp=arr[minidx];
        arr[minidx]=arr[i];
        arr[i]=temp;
    }
    cout<<endl;
    cout<<"array after sorting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}