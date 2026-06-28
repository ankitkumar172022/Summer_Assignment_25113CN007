#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    double basicSalary;
    double hra;
    double da;
    double grossSalary;
};

void addEmployee(Employee employees[], int &count) {
    cout<<"Enter Employee ID = ";
    cin>>employees[count].id;
    cout<<"Enter Employee Name = ";
    cin>>employees[count].name;
    cout<<"Enter Basic Salary = ";
    cin>>employees[count].basicSalary;
    cout<<"Enter HRA = ";
    cin>>employees[count].hra;
    cout<<"Enter DA = ";
    cin>>employees[count].da;
    employees[count].grossSalary = employees[count].basicSalary + employees[count].hra + employees[count].da;
    count++;
    cout<<"Employee salary record added successfully\n";
}

void displayEmployees(Employee employees[], int count) {
    if(count==0) {
        cout<<"No records found\n";
        return;
    }
    for(int i=0;i<count;i++) {
        cout<<"ID = "<<employees[i].id<<"\n";
        cout<<"Name = "<<employees[i].name<<"\n";
        cout<<"Basic Salary = "<<employees[i].basicSalary<<"\n";
        cout<<"HRA = "<<employees[i].hra<<"\n";
        cout<<"DA = "<<employees[i].da<<"\n";
        cout<<"Gross Salary = "<<employees[i].grossSalary<<"\n\n";
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
            cout<<"Basic Salary = "<<employees[i].basicSalary<<"\n";
            cout<<"HRA = "<<employees[i].hra<<"\n";
            cout<<"DA = "<<employees[i].da<<"\n";
            cout<<"Gross Salary = "<<employees[i].grossSalary<<"\n";
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
        cout<<"1 = Add Employee Salary\n";
        cout<<"2 = Display All Salaries\n";
        cout<<"3 = Search Employee Salary\n";
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
