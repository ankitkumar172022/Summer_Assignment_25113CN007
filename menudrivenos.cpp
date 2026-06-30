#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of array = ";
    cin>>n;
    int arr[n];

    cout<<"Enter elements = ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int choice;
    char cont;

    do {
        cout<<"\nChoose operation =\n";
        cout<<"1 = Display array\n";
        cout<<"2 = Insert element\n";
        cout<<"3 = Delete element\n";
        cout<<"4 = Search element\n";
        cout<<"5 = Sort array\n";
        cin>>choice;

        switch(choice) {
            case 1:
                cout<<"Array elements = ";
                for(int i=0;i<n;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<"\n";
                break;

            case 2: {
                int pos, val;
                cout<<"Enter position to insert = ";
                cin>>pos;
                cout<<"Enter value = ";
                cin>>val;
                if(pos<0 || pos>n){
                    cout<<"Invalid position = \n";
                } else {
                    for(int i=n;i>pos;i--){
                        arr[i]=arr[i-1];
                    }
                    arr[pos]=val;
                    n++;
                    cout<<"Element inserted = \n";
                }
                break;
            }

            case 3: {
                int pos;
                cout<<"Enter position to delete = ";
                cin>>pos;
                if(pos<0 || pos>=n){
                    cout<<"Invalid position = \n";
                } else {
                    for(int i=pos;i<n-1;i++){
                        arr[i]=arr[i+1];
                    }
                    n--;
                    cout<<"Element deleted = \n";
                }
                break;
            }

            case 4: {
                int val, found=0;
                cout<<"Enter value to search = ";
                cin>>val;
                for(int i=0;i<n;i++){
                    if(arr[i]==val){
                        cout<<"Element found at index = "<<i<<"\n";
                        found=1;
                        break;
                    }
                }
                if(!found){
                    cout<<"Element not found = \n";
                }
                break;
            }

            case 5: {
                for(int i=0;i<n-1;i++){
                    for(int j=i+1;j<n;j++){
                        if(arr[i]>arr[j]){
                            int temp=arr[i];
                            arr[i]=arr[j];
                            arr[j]=temp;
                        }
                    }
                }
                cout<<"Array sorted = ";
                for(int i=0;i<n;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<"\n";
                break;
            }

            default:
                cout<<"Invalid choice = Try again\n";
        }

        cout<<"Do you want to continue (y/n) = ";
        cin>>cont;
    } while(cont=='y' || cont=='Y');
}
