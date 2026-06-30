#include<iostream>
using namespace std;
int main(){
    int n,sum1=0,sum2=0;
    cout<<"enter the value of n (range from 1 to n) = ";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n-1<<" element from 1 to "<<n<<" with one missing"<<endl;
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    sum1=((n)*(n+1))/2;
    for(int i=0;i<n-1;i++)
    {
        sum2+=arr[i];
    }
    int diff=sum1-sum2;
    cout<<"the missing number is = "<<diff;
}