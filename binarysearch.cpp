#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array = ";
    cin>>n;
    int arr[n];
    cout<<"enter elements in sorted order = "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter element to search = ";
    cin>>key;
    int low=0,high=n-1,mid,flag=0;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            cout<<"element found at index "<<mid<<endl;
            flag=1;
            break;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(flag==0)
    {
        cout<<"element not found"<<endl;
    }
}
