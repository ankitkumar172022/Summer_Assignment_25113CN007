#include<iostream>
using namespace std;
int main(){
    int n,f,count=0;
    cout<<"enter the size of the array = ";
    cin>>n;
    int arr[n];
    cout<<"enter the element of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element to be find = "<<endl;
    cin>>f;
    for(int i=0;i<n;i++)
    {
        if(f==arr[i])
        {
            count++;
        }
    }
    if(count>0)
    {
        cout<<"number is present in the array and it's frequency is = "<<count;
    }
    else
    {
        cout<<"number not found";
    }
}