#include<iostream>
using namespace std;
int main(){
    int n,even=0,odd=0;
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
        if(arr[i]%2==0)
        {
            odd++;
        }
        else if(arr[i]%2!=0)
        {
            even++;
        }
    }
    cout<<"the number of odd element in the array is = "<<odd<<endl;
    cout<<"the number of even element in the array is = "<<even;
}