#include <iostream>
using namespace std;
int main(){
    char str[100];
    int vowels=0, consonants=0;
    cout<<"Enter a string = ";
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        char ch=tolower(str[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            vowels++;
        } 
        else if((ch>='a'&&ch<='z'))
        {
            consonants++;
        }
    }
    cout<<"Number of vowels = "<<vowels<<endl;
    cout<<"Number of consonants = "<<consonants<<endl;
}
