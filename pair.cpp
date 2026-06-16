#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n,target;
    cout<<"Enter size of array = ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements = "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter target sum = ";
    cin>>target;
    unordered_map<int,int> seen;
    bool found=false;
    for(int i=0;i<n;i++)
    {
        int complement=target-arr[i];
        if(seen.find(complement)!=seen.end()){
            cout<<"Pair found:("<<arr[i]<<","<<complement<<")"<<endl;
            found=true;
        }
        seen[arr[i]]=i;
    }
    if(!found)
    {
        cout<<"No pair found with given sum."<<endl;
    }
    
}
