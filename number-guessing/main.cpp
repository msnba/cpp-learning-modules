#include <iostream>
using namespace std;

int main() {
    int guess, tries = 0;
    srand(time(NULL));
    int num = rand() % 100 + 1;

    cout<<"Number Guessing Game\n";

    do {
        cout<<"Guess Number (1-100): ";
        cin>>guess;
        tries++;
        if (guess>num) {
            cout<<"Too High\n";
        }else if (guess<num) {
            cout<<"Too Low\n";
        }else {
            cout<<"You Won! # of tries = "<<tries<<endl;
        }
    }while (guess!=num);



}