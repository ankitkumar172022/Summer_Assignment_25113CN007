#include<iostream>
using namespace std;
int main(){
    int m,n,p,q;
    cout<<"enter the no of rows of matrix 1 = ";
    cin>>m;
    cout<<"enter the no of column of matrix 1 = ";
    cin>>n;
    cout<<"enter the no of rows of matrix 2 = ";
    cin>>p;
    cout<<"enter the no of column of matrix 2 = ";
    cin>>q;
    int arr[m][n];
    cout<<"enter the element of the matrix 1"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"enter the element of the matrix 2"<<endl;
    int brr[p][q];
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cin>>brr[i][j];
        }
    }
    if(n!=p)
    {
        cout<<"matrix multiplication is not possible";
    }
    else
    {
        int res[m][q];
        for(int i=0;i<m;i++)
        {
        for(int j=0;j<q;j++)
          {
             res[i][j]=0;
             for(int k=0;k<n;k++)
             {
                res[i][j]+=arr[i][k]*brr[k][j];
             }
          }
        }
        for(int i=0;i<m;i++)
        {
        for(int j=0;j<q;j++)
         {
            cout<<res[i][j]<<" ";
         }
            cout<<endl;
        }
    }
}