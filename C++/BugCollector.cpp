// Bug Collector

#include <iostream>

using namespace std;

int main() {

    int totalBugs, bugsInput = 0;

    cout << "==== Bugs Collector ====" << endl;

    for (int i = 1; i <= 7; i++) {
        cout << "Day " << i << ": ";
        cin >> bugsInput;
        totalBugs += bugsInput;
    }

    cout << "Total Bugs Collected is " << totalBugs << endl;

    return 0;
}