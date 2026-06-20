#include <iostream>
using namespace std;
int main(){
    int n1,n2,i,j;
    cout<<"Enter size of first array = ";
    cin>>n1;
    int arr1[n1];
    cout<<"Enter elements of first array = "<<endl;
    for(i=0;i<n1;i++) 
    {
        cin>>arr1[i];
    }
    cout<<"Enter size of second array = ";
    cin>>n2;
    int arr2[n2];
    cout<<"Enter elements of second array = "<<endl;
    for(i=0;i<n2;i++) 
    {
        cin>>arr2[i];
    }
    int merged[n1+n2];
    for(i=0;i<n1;i++) 
    {
        merged[i]=arr1[i];
    }
    for(j=0;j<n2;j++) 
    {
        merged[n1+j]=arr2[j];
    }
    cout<<"Merged Array = "<<endl;
    for(i=0;i<n1+n2;i++) {
        cout<<merged[i]<<" ";
    }
}
