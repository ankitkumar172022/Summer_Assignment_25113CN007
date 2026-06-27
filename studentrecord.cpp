#include <iostream>
#include <string>
using namespace std;
struct Student{
    int id;
    string name;
    int age;
    string course;
};
void addStudent(Student students[], int &count) {
    cout<<"Enter Student ID = ";
    cin>>students[count].id;
    cout<<"Enter Student Name = ";
    cin>>students[count].name;
    cout<<"Enter Student Age = ";
    cin>>students[count].age;
    cout<<"Enter Student Course = ";
    cin>>students[count].course;
    count++;
    cout<<"Student record added successfully\n";
}

void displayStudents(Student students[], int count) {
    if(count==0) {
        cout<<"No records found\n";
        return;
    }
    for(int i=0;i<count;i++) {
        cout<<"ID = "<<students[i].id<<"\n";
        cout<<"Name = "<<students[i].name<<"\n";
        cout<<"Age = "<<students[i].age<<"\n";
        cout<<"Course = "<<students[i].course<<"\n\n";
    }
}

void searchStudent(Student students[], int count) {
    int id;
    cout<<"Enter Student ID to search = ";
    cin>>id;
    for(int i=0;i<count;i++) {
        if(students[i].id==id) {
            cout<<"Record Found\n";
            cout<<"ID = "<<students[i].id<<"\n";
            cout<<"Name = "<<students[i].name<<"\n";
            cout<<"Age = "<<students[i].age<<"\n";
            cout<<"Course = "<<students[i].course<<"\n";
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
        cout<<"1 = Add Student\n";
        cout<<"2 = Display Students\n";
        cout<<"3 = Search Student\n";
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
