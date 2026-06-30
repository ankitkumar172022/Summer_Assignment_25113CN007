#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;
string names[MAX];
int roll[MAX];
float marks[MAX];
int countStudents = 0;

void addStudent() {
    if(countStudents>=MAX) {
        cout<<"Record limit reached!\n";
        return;
    }
    cout<<"Enter name = ";
    cin>>names[countStudents];
    cout<<"Enter roll number = ";
    cin>>roll[countStudents];
    cout<<"Enter marks = ";
    cin>>marks[countStudents];
    countStudents++;
    cout<<"Student added successfully!\n";
}

void displayStudents() {
    if(countStudents==0) {
        cout<<"No records found!\n";
        return;
    }
    cout<<"\nStudent Records = \n";
    for(int i=0;i<countStudents;i++) {
        cout<<"Name = "<<names[i]<<" Roll = "<<roll[i]<<" Marks = "<<marks[i]<<"\n";
    }
}

void searchStudent() {
    int r;
    cout<<"Enter roll number to search = ";
    cin>>r;
    for(int i=0;i<countStudents;i++) {
        if(roll[i]==r) {
            cout<<"Record Found!\n";
            cout<<"Name = "<<names[i]<<" Roll = "<<roll[i]<<" Marks = "<<marks[i]<<"\n";
            return;
        }
    }
    cout<<"Record not found!\n";
}

void updateMarks() {
    int r;
    cout<<"Enter roll number to update marks = ";
    cin>>r;
    for(int i=0;i<countStudents;i++) {
        if(roll[i]==r) {
            cout<<"Enter new marks = ";
            cin>>marks[i];
            cout<<"Marks updated successfully!\n";
            return;
        }
    }
    cout<<"Record not found!\n";
}

int main() {
    int choice;
    do {
        cout<<"\n--- Student Management System ---\n";
        cout<<"1 = Add Student\n";
        cout<<"2 = Display Students\n";
        cout<<"3 = Search Student\n";
        cout<<"4 = Update Marks\n";
        cout<<"5 = Exit\n";
        cout<<"Enter choice = ";
        cin>>choice;

        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateMarks(); break;
            case 5: cout<<"Exiting system...\n"; break;
            default: cout<<"Invalid choice!\n";
        }
    } while(choice!=5);
}
