//Brandon Cabael
//05-SEP-2017
//Lesson 02, Page 172, Question 01
//Create rock, paper, scissors game
//Show how win was obtained.

//include header files
#include<iostream>
#include<cstdlib>

//use namespace std
using namespace std;

int main() {

    //initialize variables
    char p1, p2, play_again;

    //begin user instructions
    cout << "Welcome to the rock, paper, scissors game!" << endl;
    cout << "Just a couple of instructions... Enter only r, p, or s (not case-sensitive)" << endl;
    cout << "r for rock, p for paper, s for scissors... The game will tell you who won!" << endl;
    
    //do while loop to provide re-playability
    do{

        //being user choice
        cout << "Let's get started... player 1, enter your choice! ";
        cin >> p1;
        cout << "Player 2, enter your choice! ";
        cin >> p2;

        //convert user input to lower case
        p1 = tolower(p1);
        p2 = tolower(p2);

        //use if, else loops to test conditions and report winner
        if ((p1=='r' && p2=='s') || (p1=='s' && p2=='r')) {
            cout << "Rock breaks scissors! ";
            if (p1=='r') {
                cout << "Player 1 wins!" << endl;
            }
            else {
                cout << "Player 2 wins!" << endl;
            }
        }
        else if ((p1=='p' && p2=='r') || (p1=='r' && p2=='p')) {
            cout << "Paper covers rock! ";
            if (p1=='p') {
                cout << "Player 1 wins!" << endl;
            }
            else {
                cout << "Player 2 wins!" << endl;
            }
        }
        else {
            cout << "Scissors cuts paper! ";
            if (p1=='s') {
                cout << "Player 1 wins!" << endl;
            }
            else {
                cout << "Player 2 wins!" << endl;
            }
        }

        //prompt user if they would like to replay
        cout << "Would you like to play again? (y/n) ";
        cin >> play_again;
        play_again = tolower(play_again);
    } while (play_again=='y');
    
    system("pause");
    return 0;
}