#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of students = ";
    cin>>n;

    string names[100];
    int roll[100];
    float marks[100];

    for(int i=0;i<n;i++) {
        cout<<"Enter name of student "<<i+1<<" = ";
        cin>>names[i];
        cout<<"Enter roll number of student "<<i+1<<" = ";
        cin>>roll[i];
        cout<<"Enter marks of student "<<i+1<<" = ";
        cin>>marks[i];
    }

    cout<<"\nStudent Records = \n";
    for(int i=0;i<n;i++) {
        cout<<"Name = "<<names[i]<<" Roll = "<<roll[i]<<" Marks = "<<marks[i]<<"\n";
    }
}
