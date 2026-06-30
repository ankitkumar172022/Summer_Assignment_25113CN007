#include <iostream>
using namespace std;

int main() {
    int choice, a, b;
    float result;
    char cont;

    do {
        cout<<"Enter first number = ";
        cin>>a;
        cout<<"Enter second number = ";
        cin>>b;

        cout<<"Choose operation =\n";
        cout<<"1 = Addition\n";
        cout<<"2 = Subtraction\n";
        cout<<"3 = Multiplication\n";
        cout<<"4 = Division\n";
        cout<<"5 = Modulo\n";
        cin>>choice;

        switch(choice) {
            case 1: 
                result = a + b;
                cout<<"Result = "<<result<<"\n";
                break;
            case 2: 
                result = a - b;
                cout<<"Result = "<<result<<"\n";
                break;
            case 3: 
                result = a * b;
                cout<<"Result = "<<result<<"\n";
                break;
            case 4: 
                if(b != 0) {
                    result = (float)a / b;
                    cout<<"Result = "<<result<<"\n";
                } else {
                    cout<<"Error = Division by zero\n";
                }
                break;
            case 5: 
                if(b != 0) {
                    cout<<"Result = "<<a % b<<"\n";
                } else {
                    cout<<"Error = Modulo by zero\n";
                }
                break;
            default: 
                cout<<"Invalid choice = Try again\n";
        }

        cout<<"Do you want to continue (y/n) = ";
        cin>>cont;
    } while(cont == 'y' || cont == 'Y');
}
