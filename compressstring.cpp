#include <iostream>
#include <string>
using namespace std;
string compressString(string s) {
    string result = "";
    int count = 1;
    for(int i=1;i<=s.length();i++) {
        if(i < s.length() && s[i] == s[i-1]) {
            count++;
        } else {
            result += s[i-1];
            result += to_string(count);
            count = 1;
        }
    }
    return result;
}
int main(){
    string str;
    cout<<"Enter a string = ";
    cin>>str;
    cout<<"Compressed string = "<<compressString(str)<<endl;
}
