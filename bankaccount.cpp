#include <iostream>
#include <string>
using namespace std;

struct Account {
    int accNo;
    string name;
    double balance;
};

Account accounts[100];
int countAcc = 0;

void createAccount() {
    cout<<"Enter Account Number=";
    cin>>accounts[countAcc].accNo;
    cout<<"Enter Account Holder Name=";
    cin.ignore();
    getline(cin,accounts[countAcc].name);
    cout<<"Enter Initial Balance=";
    cin>>accounts[countAcc].balance;
    countAcc++;
    cout<<"Account created successfully\n";
}

void displayAccounts() {
    if(countAcc==0) {
        cout<<"No accounts available\n";
    } else {
        for(int i=0;i<countAcc;i++) {
            cout<<"Account Number="<<accounts[i].accNo<<"\n";
            cout<<"Holder Name="<<accounts[i].name<<"\n";
            cout<<"Balance="<<accounts[i].balance<<"\n";
            cout<<"-------------------\n";
        }
    }
}

void depositMoney() {
    int acc;
    double amt;
    cout<<"Enter Account Number=";
    cin>>acc;
    bool found=false;
    for(int i=0;i<countAcc;i++) {
        if(accounts[i].accNo==acc) {
            cout<<"Enter amount to deposit=";
            cin>>amt;
            accounts[i].balance=accounts[i].balance+amt;
            cout<<"Deposit successful. New Balance="<<accounts[i].balance<<"\n";
            found=true;
            break;
        }
    }
    if(!found) {
        cout<<"Account not found\n";
    }
}

void withdrawMoney() {
    int acc;
    double amt;
    cout<<"Enter Account Number=";
    cin>>acc;
    bool found=false;
    for(int i=0;i<countAcc;i++) {
        if(accounts[i].accNo==acc) {
            cout<<"Enter amount to withdraw=";
            cin>>amt;
            if(amt<=accounts[i].balance) {
                accounts[i].balance=accounts[i].balance-amt;
                cout<<"Withdrawal successful. New Balance="<<accounts[i].balance<<"\n";
            } else {
                cout<<"Insufficient balance\n";
            }
            found=true;
            break;
        }
    }
    if(!found) {
        cout<<"Account not found\n";
    }
}

int main() {
    int choice;
    do {
        cout<<"Bank Account System\n";
        cout<<"1=Create Account\n";
        cout<<"2=Display Accounts\n";
        cout<<"3=Deposit Money\n";
        cout<<"4=Withdraw Money\n";
        cout<<"5=Exit\n";
        cout<<"Enter your choice=";
        cin>>choice;
        if(choice==1) {
            createAccount();
        } else if(choice==2) {
            displayAccounts();
        } else if(choice==3) {
            depositMoney();
        } else if(choice==4) {
            withdrawMoney();
        } else if(choice==5) {
            cout<<"Exiting system\n";
        } else {
            cout<<"Invalid choice\n";
        }
    } while(choice!=5);
}
