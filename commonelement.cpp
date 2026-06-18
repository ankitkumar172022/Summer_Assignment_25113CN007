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
    cout<<"Common Elements = "<<endl;
    for(i=0;i<n1;i++) 
    {
        for(j=0;j<n2;j++) 
        {
            if(arr1[i]==arr2[j]) 
            {
                bool duplicate=false;
                for(int k=0;k<i;k++) 
                {
                    if(arr1[i]==arr1[k]) 
                    {
                        duplicate=true;
                        break;
                    }
                }
                if(!duplicate) 
                {
                    cout<<arr1[i]<<" ";
                }
            }
        }
    }
}
