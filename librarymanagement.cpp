#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
};

Book library[100];
int countBooks = 0;

void addBook() {
    cout<<"Enter Book ID=";
    cin>>library[countBooks].id;
    cout<<"Enter Book Title=";
    cin.ignore();
    getline(cin,library[countBooks].title);
    cout<<"Enter Book Author=";
    getline(cin,library[countBooks].author);
    countBooks++;
    cout<<"Book added successfully\n";
}

void displayBooks() {
    if(countBooks==0) {
        cout<<"No books available\n";
    } else {
        for(int i=0;i<countBooks;i++) {
            cout<<"Book ID="<<library[i].id<<"\n";
            cout<<"Title="<<library[i].title<<"\n";
            cout<<"Author="<<library[i].author<<"\n";
            cout<<"-------------------\n";
        }
    }
}

void searchBook() {
    int id;
    cout<<"Enter Book ID to search=";
    cin>>id;
    bool found=false;
    for(int i=0;i<countBooks;i++) {
        if(library[i].id==id) {
            cout<<"Book found\n";
            cout<<"Book ID="<<library[i].id<<"\n";
            cout<<"Title="<<library[i].title<<"\n";
            cout<<"Author="<<library[i].author<<"\n";
            found=true;
            break;
        }
    }
    if(!found) {
        cout<<"Book not found\n";
    }
}

int main() {
    int choice;
    do {
        cout<<"Library Management System\n";
        cout<<"1=Add Book\n";
        cout<<"2=Display Books\n";
        cout<<"3=Search Book\n";
        cout<<"4=Exit\n";
        cout<<"Enter your choice=";
        cin>>choice;
        if(choice==1) {
            addBook();
        } else if(choice==2) {
            displayBooks();
        } else if(choice==3) {
            searchBook();
        } else if(choice==4) {
            cout<<"Exiting system\n";
        } else {
            cout<<"Invalid choice\n";
        }
    } while(choice!=4);
}
