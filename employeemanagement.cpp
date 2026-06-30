#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    int age;
    string department;
    double salary;
};

void addEmployee(Employee employees[], int &count) {
    cout<<"Enter Employee ID = ";
    cin>>employees[count].id;
    cout<<"Enter Employee Name = ";
    cin>>employees[count].name;
    cout<<"Enter Employee Age = ";
    cin>>employees[count].age;
    cout<<"Enter Employee Department = ";
    cin>>employees[count].department;
    cout<<"Enter Employee Salary = ";
    cin>>employees[count].salary;
    count++;
    cout<<"Employee record added successfully\n";
}

void displayEmployees(Employee employees[], int count) {
    if(count==0) {
        cout<<"No records found\n";
        return;
    }
    for(int i=0;i<count;i++) {
        cout<<"ID = "<<employees[i].id<<"\n";
        cout<<"Name = "<<employees[i].name<<"\n";
        cout<<"Age = "<<employees[i].age<<"\n";
        cout<<"Department = "<<employees[i].department<<"\n";
        cout<<"Salary = "<<employees[i].salary<<"\n\n";
    }
}

void searchEmployee(Employee employees[], int count) {
    int id;
    cout<<"Enter Employee ID to search = ";
    cin>>id;
    for(int i=0;i<count;i++) {
        if(employees[i].id==id) {
            cout<<"Record Found\n";
            cout<<"ID = "<<employees[i].id<<"\n";
            cout<<"Name = "<<employees[i].name<<"\n";
            cout<<"Age = "<<employees[i].age<<"\n";
            cout<<"Department = "<<employees[i].department<<"\n";
            cout<<"Salary = "<<employees[i].salary<<"\n";
            return;
        }
    }
    cout<<"Record not found\n";
}

int main() {
    Employee employees[100];
    int count=0;
    int choice;
    do {
        cout<<"1 = Add Employee\n";
        cout<<"2 = Display Employees\n";
        cout<<"3 = Search Employee\n";
        cout<<"4 = Exit\n";
        cout<<"Enter choice = ";
        cin>>choice;
        if(choice==1) {
            addEmployee(employees,count);
        }
        else if(choice==2) {
            displayEmployees(employees,count);
        }
        else if(choice==3) {
            searchEmployee(employees,count);
        }
        else if(choice==4) {
            cout<<"Exiting program\n";
        }
        else {
            cout<<"Invalid choice\n";
        }
    } while(choice!=4);
}

