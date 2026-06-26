#include <iostream>
using namespace std;
int main(){
    char str[100];
    int length=0;
    cout<<"Enter a string = ";
    cin>>str;
    for(int i=0;str[i]!='\0';i++)
    {
        length++;
    }
    cout<<"The length of the string is = "<<length;
}
