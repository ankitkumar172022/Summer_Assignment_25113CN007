#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array = ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int index=0;
    for (int i=0;i<n;i++) 
    {
        if(arr[i]!=0) 
        {
            arr[index++]=arr[i];
        }
    }
    while(index<n) 
    {
        arr[index++]=0;
    }
    cout<<"array after moving zeroes to end"<<endl;
    for(int i=0;i<n;i++) 
    {
        cout<<arr[i]<< " ";
    }
}
