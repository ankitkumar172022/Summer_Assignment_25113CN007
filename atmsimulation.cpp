#include <iostream>
using namespace std;
int main(){
    int balance = 10000;
    int choice, amount;
    cout<<"Welcome to ATM Simulation"<<endl;
    do{
        cout<<"\nMenu ="<<endl;
        cout<<"1. Check Balance"<<endl;
        cout<<"2. Deposit Money"<<endl;
        cout<<"3. Withdraw Money"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice = ";
        cin>>choice;
        if(choice == 1) 
        {
            cout<<"Your balance = "<<balance<<endl;
        } 
        else if(choice == 2) 
        {
            cout<<"Enter amount to deposit = ";
            cin>>amount;
            balance = balance + amount;
            cout<<"Deposit successful. New balance = "<<balance<<endl;
        } 
        else if(choice == 3) 
        {
            cout<<"Enter amount to withdraw = ";
            cin>>amount;
            if(amount <= balance) 
            {
                balance = balance - amount;
                cout<<"Withdrawal successful. New balance = "<<balance<<endl;
            } 
            else 
            {
                cout<<"Insufficient balance"<<endl;
            }
        } 
        else if(choice == 4) 
        {
            cout<<"Thank you for using ATM"<<endl;
        } 
        else 
        {
            cout<<"Invalid choice"<<endl;
        }
    }while(choice != 4);
}
