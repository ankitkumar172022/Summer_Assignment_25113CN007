#include <iostream>
#include <string>
using namespace std;

struct Ticket {
    int id;
    string eventName;
    int availableSeats;
};

Ticket events[100];
int countEvents = 0;

void addEvent() {
    cout<<"Enter Event ID=";
    cin>>events[countEvents].id;
    cout<<"Enter Event Name=";
    cin.ignore();
    getline(cin,events[countEvents].eventName);
    cout<<"Enter Available Seats=";
    cin>>events[countEvents].availableSeats;
    countEvents++;
    cout<<"Event added successfully\n";
}

void displayEvents() {
    if(countEvents==0) {
        cout<<"No events available\n";
    } else {
        for(int i=0;i<countEvents;i++) {
            cout<<"Event ID="<<events[i].id<<"\n";
            cout<<"Event Name="<<events[i].eventName<<"\n";
            cout<<"Available Seats="<<events[i].availableSeats<<"\n";
            cout<<"-------------------\n";
        }
    }
}

void bookTicket() {
    int id,seats;
    cout<<"Enter Event ID to book=";
    cin>>id;
    bool found=false;
    for(int i=0;i<countEvents;i++) {
        if(events[i].id==id) {
            cout<<"Enter number of seats to book=";
            cin>>seats;
            if(seats<=events[i].availableSeats) {
                events[i].availableSeats=events[i].availableSeats-seats;
                cout<<"Booking successful. Remaining Seats="<<events[i].availableSeats<<"\n";
            } else {
                cout<<"Not enough seats available\n";
            }
            found=true;
            break;
        }
    }
    if(!found) {
        cout<<"Event not found\n";
    }
}

int main() {
    int choice;
    do {
        cout<<"Ticket Booking System\n";
        cout<<"1=Add Event\n";
        cout<<"2=Display Events\n";
        cout<<"3=Book Ticket\n";
        cout<<"4=Exit\n";
        cout<<"Enter your choice=";
        cin>>choice;
        if(choice==1) {
            addEvent();
        } else if(choice==2) {
            displayEvents();
        } else if(choice==3) {
            bookTicket();
        } else if(choice==4) {
            cout<<"Exiting system\n";
        } else {
            cout<<"Invalid choice\n";
        }
    } while(choice!=4);
}
