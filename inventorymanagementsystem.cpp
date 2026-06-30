#include <iostream>
#include <string>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
    float price;
};

int main() {
    Item inventory[100];
    int count=0;
    int choice;
    char cont;

    do {
        cout<<"\nChoose operation =\n";
        cout<<"1 = Add item\n";
        cout<<"2 = Display all items\n";
        cout<<"3 = Search item by ID\n";
        cout<<"4 = Update item\n";
        cout<<"5 = Delete item\n";
        cin>>choice;

        switch(choice) {
            case 1: {
                cout<<"Enter item ID = ";
                cin>>inventory[count].id;
                cout<<"Enter item name = ";
                cin>>inventory[count].name;
                cout<<"Enter quantity = ";
                cin>>inventory[count].quantity;
                cout<<"Enter price = ";
                cin>>inventory[count].price;
                count++;
                cout<<"Item added = \n";
                break;
            }

            case 2: {
                if(count==0){
                    cout<<"Inventory empty = \n";
                } else {
                    cout<<"Inventory items = \n";
                    for(int i=0;i<count;i++){
                        cout<<"ID = "<<inventory[i].id
                            <<" Name = "<<inventory[i].name
                            <<" Quantity = "<<inventory[i].quantity
                            <<" Price = "<<inventory[i].price<<"\n";
                    }
                }
                break;
            }

            case 3: {
                int id, found=0;
                cout<<"Enter ID to search = ";
                cin>>id;
                for(int i=0;i<count;i++){
                    if(inventory[i].id==id){
                        cout<<"Item found = ID = "<<inventory[i].id
                            <<" Name = "<<inventory[i].name
                            <<" Quantity = "<<inventory[i].quantity
                            <<" Price = "<<inventory[i].price<<"\n";
                        found=1;
                        break;
                    }
                }
                if(!found){
                    cout<<"Item not found = \n";
                }
                break;
            }

            case 4: {
                int id, found=0;
                cout<<"Enter ID to update = ";
                cin>>id;
                for(int i=0;i<count;i++){
                    if(inventory[i].id==id){
                        cout<<"Enter new name = ";
                        cin>>inventory[i].name;
                        cout<<"Enter new quantity = ";
                        cin>>inventory[i].quantity;
                        cout<<"Enter new price = ";
                        cin>>inventory[i].price;
                        cout<<"Item updated = \n";
                        found=1;
                        break;
                    }
                }
                if(!found){
                    cout<<"Item not found = \n";
                }
                break;
            }

            case 5: {
                int id, found=0;
                cout<<"Enter ID to delete = ";
                cin>>id;
                for(int i=0;i<count;i++){
                    if(inventory[i].id==id){
                        for(int j=i;j<count-1;j++){
                            inventory[j]=inventory[j+1];
                        }
                        count--;
                        cout<<"Item deleted = \n";
                        found=1;
                        break;
                    }
                }
                if(!found){
                    cout<<"Item not found = \n";
                }
                break;
            }

            default:
                cout<<"Invalid choice = Try again\n";
        }

        cout<<"Do you want to continue (y/n) = ";
        cin>>cont;
    } while(cont=='y' || cont=='Y');
}
