#include<iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout<<"Enter number of rows = ";
    cin>>r;
    cout<<"Enter number of columns = ";
    cin>>c;
    int a[r][c];
    cout<<"Enter elements of the matrix = "<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"The matrix is = "<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Row-wise sums = "<<endl;
    for(i=0;i<r;i++){
        int sum=0;
        for(j=0;j<c;j++){
            sum=sum+a[i][j];
        }
        cout<<"Sum of row "<<i+1<<" = "<<sum<<"\n";
    }
}
