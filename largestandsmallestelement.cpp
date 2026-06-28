#include<iostream>
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
    int largest=arr[0];
    int smallest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    cout<<"the largest element of the array is = "<<largest<<endl;
    cout<<"the smallest element of the array is = "<<smallest;
}