// Not Suitable For Final Project
#include <iostream>

using namespace std;

class RPS {
    public:

        string options[3] = {"rock", "paper", "scissors"};

        bool checkEqual(string input, string computerChoice) {
            return (input == computerChoice);
        }

        bool checkType(string input, string computerChoice) {
            return (
                input == "scissors" && computerChoice == "paper" ||
                input == "rock" && computerChoice == "scissors" ||
                input == "paper" && computerChoice == "rock"
            );
        }

        string makeComputerChoice() {
            int move = rand() % 3;
            return options[move];
        }

        string getInput() {
            string input;
            cout << "Rock, Paper, Scissors: ";
            cin >> input;
            return input;
        }


};

int main() {

    string endProgram;

    while (endProgram != "n") {
        RPS rps;
        string computer_choice = rps.makeComputerChoice();
        string user_choice = rps.getInput();

        cout << "User Choice: " << user_choice << "\nComputer Coice: " << computer_choice << endl;

        if (rps.checkEqual(user_choice, computer_choice)) {
            cout << "Its a Tie!" << endl;
        } else if (rps.checkType(user_choice, computer_choice)) {
            cout << "User Wins!" << endl;
        } else {
            cout << "Computer Wins!" << endl;
        }

        cout << "Do You Want to Play Again: (y = Yes, n = No): ";
        cin >> endProgram;
    }
}