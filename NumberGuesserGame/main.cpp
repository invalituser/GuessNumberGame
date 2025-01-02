#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){

    srand(time(0));
    int generatedNumber = rand() % 100 + 1;

    cout << "Welcome to guess game!" << endl;
    cout << "1.Start\n"; cout << "2.Exit\n";
    double a; cin >> a; double b;

    while(true){
        if(a == 2){
            return 0;
        } else if(a==1){
            break;
        } else{
            cout << "Incorrect input\n";
            cout << "Enter: "; cin >> a;
        }
    } 

    int attempts = 10;

    do {
        cout << "You have " << attempts << " attempts to guess the number!\n";
        cout << "try: "; cin >> b; cout << endl;
        attempts--;

        if(b<generatedNumber){
            cout << "too low!\n";
        }   else if(b>generatedNumber){
            cout << "too high\n";
        }   else{
            cout << "Congratulations, you have guessed right number!\n";
            cout << "You have left " << attempts << " left attempts\n";
            break;
            }
        
        if (attempts == 0){
            cout << "You lose the game!\n" << "correct answer was: " << generatedNumber;
            break;
        }
    }   while(attempts > 0);
    
    return 0;
}