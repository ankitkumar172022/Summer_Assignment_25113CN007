#include<iostream>
using namespace std;
int main(){
    int n,f;
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
            cout<<"number is present";
            break;
        }
        else
        {
            cout<<"not found";
            break;
        }
    }
}