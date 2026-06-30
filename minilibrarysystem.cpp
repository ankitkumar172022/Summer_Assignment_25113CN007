#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of books = ";
    cin>>n;

    string title[100];
    string author[100];
    int id[100];

    for(int i=0;i<n;i++) {
        cout<<"Enter title of book "<<i+1<<" = ";
        cin>>title[i];
        cout<<"Enter author of book "<<i+1<<" = ";
        cin>>author[i];
        cout<<"Enter book ID of book "<<i+1<<" = ";
        cin>>id[i];
    }

    cout<<"\nLibrary Records = \n";
    for(int i=0;i<n;i++) {
        cout<<"Title = "<<title[i]<<" Author = "<<author[i]<<" ID = "<<id[i]<<"\n";
    }
}
