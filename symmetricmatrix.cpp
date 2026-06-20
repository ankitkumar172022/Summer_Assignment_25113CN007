#include<iostream>
using namespace std;
int main(){
    int n,i,j,flag=1;
    cout<<"Enter size of square matrix = ";
    cin>>n;
    int a[n][n];
    cout<<"Enter elements of the matrix = "<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"The matrix is = "<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!=a[j][i]){
                flag=0;
                break;
            }
        }
        if(flag==0) break;
    }
    if(flag==1) cout<<"The matrix is Symmetric";
    else cout<<"The matrix is Not Symmetric";
}
