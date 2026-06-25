#include<iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout<<"Enter number of rows = ";
    cin>>r;
    cout<<"Enter number of columns = ";
    cin>>c;
    int a[r][c];
    cout<<"Enter elements of the matrix ="<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"The matrix is ="<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Column-wise sums ="<<endl;
    for(j=0;j<c;j++){
        int sum=0;
        for(i=0;i<r;i++){
            sum=sum+a[i][j];
        }
        cout<<"Sum of ="<<j+1<<" "<<sum<<endl;
    }
}
