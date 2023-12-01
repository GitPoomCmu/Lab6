#include<iostream>
using namespace std;

int main(){
    int evenNum = 0;
    int oddNum = 0;
    int input = 1;
    
    while(input != 0){
        cout << "Enter an integer: ";
        cin >> input;
        
        if(input == 0){
            break;
        }
        
        if(input % 2 == 0){
            evenNum++;
        }
        else{
            oddNum++;
        }
    }
    
    cout << "#Even numbers = " << evenNum << "\n";
    cout << "#Odd numbers = " << oddNum;
    
    return 0;
}
