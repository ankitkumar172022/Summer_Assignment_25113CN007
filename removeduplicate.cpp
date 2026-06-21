#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array = ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements = "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_set<int> s;
    cout<<"Array after removing duplicates = "<<endl;
    for(int i=0;i<n;i++)
    {
        if(s.find(arr[i])==s.end())
        {
            cout<<arr[i]<<" ";
            s.insert(arr[i]);
        }
    }
    cout<<endl;
}
