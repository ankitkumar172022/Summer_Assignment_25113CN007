#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout<<"Enter a string = ";
    getline(cin,str);

    int choice;
    char cont;

    do {
        cout<<"\nChoose operation =\n";
        cout<<"1 = Display string\n";
        cout<<"2 = Find length\n";
        cout<<"3 = Reverse string\n";
        cout<<"4 = Convert to uppercase\n";
        cout<<"5 = Convert to lowercase\n";
        cout<<"6 = Count vowels and consonants\n";
        cout<<"7 = Check palindrome\n";
        cin>>choice;

        switch(choice) {
            case 1:
                cout<<"String = "<<str<<"\n";
                break;

            case 2:
                cout<<"Length = "<<str.length()<<"\n";
                break;

            case 3: {
                string rev = str;
                reverse(rev.begin(),rev.end());
                cout<<"Reversed = "<<rev<<"\n";
                break;
            }

            case 4: {
                string up = str;
                for(int i=0;i<up.size();i++){
                    up[i]=toupper(up[i]);
                }
                cout<<"Uppercase = "<<up<<"\n";
                break;
            }

            case 5: {
                string low = str;
                for(int i=0;i<low.size();i++){
                    low[i]=tolower(low[i]);
                }
                cout<<"Lowercase = "<<low<<"\n";
                break;
            }

            case 6: {
                int v=0,c=0;
                for(int i=0;i<str.size();i++){
                    char ch=tolower(str[i]);
                    if(isalpha(ch)){
                        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                            v++;
                        } else {
                            c++;
                        }
                    }
                }
                cout<<"Vowels = "<<v<<"\n";
                cout<<"Consonants = "<<c<<"\n";
                break;
            }

            case 7: {
                string rev=str;
                reverse(rev.begin(),rev.end());
                if(rev==str){
                    cout<<"Palindrome = Yes\n";
                } else {
                    cout<<"Palindrome = No\n";
                }
                break;
            }

            default:
                cout<<"Invalid choice = Try again\n";
        }

        cout<<"Do you want to continue (y/n) = ";
        cin>>cont;
        cin.ignore(); // clear buffer for next getline if needed
    } while(cont=='y' || cont=='Y');
}
