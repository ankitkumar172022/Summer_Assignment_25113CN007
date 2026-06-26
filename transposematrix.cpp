#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the rows of matrix = ";
    cin>>m;
    cout<<"enter the column of matrix = ";
    cin>>n;
    cout<<"enter the element of matrix "<<endl;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"the transpose of the matrix is"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}