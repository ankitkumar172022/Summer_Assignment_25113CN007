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
    int k=0;
    for(i=0;i<n1;i++) 
    {
        merged[k++]=arr1[i];
    }
    for(i=0;i<n2;i++) 
    {
        merged[k++]=arr2[i];
    }
    cout<<"Union of Arrays = "<<endl;
    for(i=0;i<k;i++) 
    {
        bool duplicate=false;
        for(j=0;j<i;j++) 
        {
            if(merged[i]==merged[j]) 
            {
                duplicate=true;
                break;
            }
        }
        if(!duplicate) 
        {
            cout<<merged[i]<<" ";
        }
    }
}
