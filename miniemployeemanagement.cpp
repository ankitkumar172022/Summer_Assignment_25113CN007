#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of employees = ";
    cin>>n;

    string name[100];
    int id[100];
    string department[100];
    float salary[100];

    for(int i=0;i<n;i++) {
        cout<<"Enter name of employee "<<i+1<<" = ";
        cin>>name[i];
        cout<<"Enter ID of employee "<<i+1<<" = ";
        cin>>id[i];
        cout<<"Enter department of employee "<<i+1<<" = ";
        cin>>department[i];
        cout<<"Enter salary of employee "<<i+1<<" = ";
        cin>>salary[i];
    }

    cout<<"\nEmployee Records = \n";
    for(int i=0;i<n;i++) {
        cout<<"Name = "<<name[i]<<" ID = "<<id[i]<<" Department = "<<department[i]<<" Salary = "<<salary[i]<<"\n";
    }
}
