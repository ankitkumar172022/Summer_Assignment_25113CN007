#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the rows of matrix = ";
    cin>>m;
    cout<<"enter the column of matrix = ";
    cin>>n;
    cout<<"enter the element of matrix 1"<<endl;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int brr[m][n];
    cout<<"enter the element of matrix 2"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>brr[i][j];
        }
    }
    int crr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            crr[i][j]=arr[i][j]-brr[i][j];
        }
    }
    cout<<"the subtract of two matrix is"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
}