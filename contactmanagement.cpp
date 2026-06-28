#include <iostream>
#include <string>
using namespace std;

struct Contact {
    int id;
    string name;
    string phone;
};

Contact contacts[100];
int countContacts = 0;

void addContact() {
    cout<<"Enter Contact ID=";
    cin>>contacts[countContacts].id;
    cout<<"Enter Contact Name=";
    cin.ignore();
    getline(cin,contacts[countContacts].name);
    cout<<"Enter Contact Phone=";
    getline(cin,contacts[countContacts].phone);
    countContacts++;
    cout<<"Contact added successfully\n";
}

void displayContacts() {
    if(countContacts==0) {
        cout<<"No contacts available\n";
    } else {
        for(int i=0;i<countContacts;i++) {
            cout<<"Contact ID="<<contacts[i].id<<"\n";
            cout<<"Name="<<contacts[i].name<<"\n";
            cout<<"Phone="<<contacts[i].phone<<"\n";
            cout<<"-------------------\n";
        }
    }
}

void searchContact() {
    int id;
    cout<<"Enter Contact ID to search=";
    cin>>id;
    bool found=false;
    for(int i=0;i<countContacts;i++) {
        if(contacts[i].id==id) {
            cout<<"Contact found\n";
            cout<<"Contact ID="<<contacts[i].id<<"\n";
            cout<<"Name="<<contacts[i].name<<"\n";
            cout<<"Phone="<<contacts[i].phone<<"\n";
            found=true;
            break;
        }
    }
    if(!found) {
        cout<<"Contact not found\n";
    }
}

int main() {
    int choice;
    do {
        cout<<"Contact Management System\n";
        cout<<"1=Add Contact\n";
        cout<<"2=Display Contacts\n";
        cout<<"3=Search Contact\n";
        cout<<"4=Exit\n";
        cout<<"Enter your choice=";
        cin>>choice;
        if(choice==1) {
            addContact();
        } else if(choice==2) {
            displayContacts();
        } else if(choice==3) {
            searchContact();
        } else if(choice==4) {
            cout<<"Exiting system\n";
        } else {
            cout<<"Invalid choice\n";
        }
    } while(choice!=4);
}
