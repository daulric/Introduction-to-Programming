// Rock Paper Scissors Game for Final Project!

#include <iostream>

using namespace std;

int main() {

    string input, computer_choice;
    string options[] = {"rock", "paper", "scissors"};

    string endProgram = "y";
    int move;

    while (endProgram != "n") {
        move = rand() % 3;
        computer_choice = options[move];

        cout << "Rock, Paper, Scissors: ";
        cin >> input;
        cout << "Computer Choice: " << computer_choice << endl;

        if (input == computer_choice) {
            cout << "Its a Tie" << endl;
        } else if (
            input == "scissors" && computer_choice == "paper" ||
            input == "rock" && computer_choice == "scissors" ||
            input == "paper" && computer_choice == "rock"
        ) {
            cout << "You Win!!" << endl;
        } else {
            cout << "Computer Win!" << endl;
        }

        cout << "Do You Want to Play Again: (y = Yes, n = No) ";
        cin >> endProgram;
    }

    return 0;
}