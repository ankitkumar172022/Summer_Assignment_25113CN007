#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int start, end;
    cout << "Enter start of range = ";
    cin >> start;
    cout << "Enter end of range = ";
    cin >> end;
    for (int num = start; num <= end; num++) {
        if (num > 1)
         {  
            bool isPrime = true;
            for (int i = 2; i <= sqrt(num); i++)
            {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime)
            {
                cout << num << " ";
            }
        }
    }
    
    cout << endl;
}