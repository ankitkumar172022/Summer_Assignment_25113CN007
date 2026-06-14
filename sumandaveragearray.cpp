#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the range of the array = ";
    cin>>n;
    int arr[n];
    cout<<"enter the element of the array = "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<"the sum of the array element is = "<<sum<<endl;
    int average;
    average=(sum/n);
    cout<<"the average of the array element is = "<<average;
}    