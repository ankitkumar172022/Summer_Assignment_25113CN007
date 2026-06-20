#include<iostream>
#include<math.h>
using namespace std;
int reverse(int n , int digits)
{
    if(n==0) return 0;
    return (n%10)*pow(10,digits-1)+reverse(n/10,digits-1);
}
int main(){
    int n;
    cout<<"enter your number = ";
    cin>>n;
    int digits=(int)(log10(n)+1);
    int r=reverse(n,digits);
    cout<<"the reverse of the number is "<<r;
}