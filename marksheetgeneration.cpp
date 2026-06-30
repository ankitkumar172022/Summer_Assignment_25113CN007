#include <iostream>
#include <string>
using namespace std;

struct Student {
    int roll;
    string name;
    int marks[5];
    int total;
    double percentage;
};

void addStudent(Student students[], int &count) {
    cout<<"Enter Roll Number = ";
    cin>>students[count].roll;
    cout<<"Enter Name = ";
    cin>>students[count].name;
    students[count].total=0;
    for(int i=0;i<5;i++) {
        cout<<"Enter Marks for Subject "<<i+1<<" = ";
        cin>>students[count].marks[i];
        students[count].total+=students[count].marks[i];
    }
    students[count].percentage = students[count].total/5.0;
    count++;
    cout<<"Student marksheet generated successfully\n";
}

void displayStudents(Student students[], int count) {
    if(count==0) {
        cout<<"No records found\n";
        return;
    }
    for(int i=0;i<count;i++) {
        cout<<"Roll = "<<students[i].roll<<"\n";
        cout<<"Name = "<<students[i].name<<"\n";
        for(int j=0;j<5;j++) {
            cout<<"Subject "<<j+1<<" Marks = "<<students[i].marks[j]<<"\n";
        }
        cout<<"Total = "<<students[i].total<<"\n";
        cout<<"Percentage = "<<students[i].percentage<<"%\n\n";
    }
}

void searchStudent(Student students[], int count) {
    int roll;
    cout<<"Enter Roll Number to search = ";
    cin>>roll;
    for(int i=0;i<count;i++) {
        if(students[i].roll==roll) {
            cout<<"Record Found\n";
            cout<<"Roll = "<<students[i].roll<<"\n";
            cout<<"Name = "<<students[i].name<<"\n";
            for(int j=0;j<5;j++) {
                cout<<"Subject "<<j+1<<" Marks = "<<students[i].marks[j]<<"\n";
            }
            cout<<"Total = "<<students[i].total<<"\n";
            cout<<"Percentage = "<<students[i].percentage<<"%\n";
            return;
        }
    }
    cout<<"Record not found\n";
}

int main() {
    Student students[100];
    int count=0;
    int choice;
    do {
        cout<<"1 = Add Student Marksheet\n";
        cout<<"2 = Display All Marksheets\n";
        cout<<"3 = Search Marksheet\n";
        cout<<"4 = Exit\n";
        cout<<"Enter choice = ";
        cin>>choice;
        if(choice==1) {
            addStudent(students,count);
        }
        else if(choice==2) {
            displayStudents(students,count);
        }
        else if(choice==3) {
            searchStudent(students,count);
        }
        else if(choice==4) {
            cout<<"Exiting program\n";
        }
        else {
            cout<<"Invalid choice\n";
        }
    } while(choice!=4);
}
