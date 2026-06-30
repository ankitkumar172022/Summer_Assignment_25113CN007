#include <iostream>
using namespace std;
int main(){
    int score = 0;
    int answer;
    cout<<"Welcome to Quiz Application"<<endl;
    cout<<"\nQ1 = What is the capital of India?"<<endl;
    cout<<"1. Mumbai"<<endl;
    cout<<"2. Delhi"<<endl;
    cout<<"3. Kolkata"<<endl;
    cout<<"Enter your answer = ";
    cin>>answer;
    if(answer == 2) 
    {
        cout<<"Correct!"<<endl;
        score = score + 1;
    } 
    else 
    {
        cout<<"Wrong!"<<endl;
    }
    cout<<"\nQ2 = Which language is used to write programs in this quiz?"<<endl;
    cout<<"1. Python"<<endl;
    cout<<"2. Java"<<endl;
    cout<<"3. C++"<<endl;
    cout<<"Enter your answer = ";
    cin>>answer;
    if(answer == 3) 
    {
        cout<<"Correct!"<<endl;
        score = score + 1;
    } 
    else 
    {
        cout<<"Wrong!"<<endl;
    }
    cout<<"\nQ3 = Who is known as the father of computers?"<<endl;
    cout<<"1. Charles Babbage"<<endl;
    cout<<"2. Alan Turing"<<endl;
    cout<<"3. Bill Gates"<<endl;
    cout<<"Enter your answer = ";
    cin>>answer;
    if(answer == 1) 
    {
        cout<<"Correct!"<<endl;
        score = score + 1;
    } 
    else 
    {
        cout<<"Wrong!"<<endl;
    }
    cout<<"\nYour final score = "<<score<<"/3"<<endl;
}
