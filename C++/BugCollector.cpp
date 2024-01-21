// Bug Collector

#include <iostream>

using namespace std;

int main() {

    int BugCollector[7];

    cout << "==== Bugs Collector ====" << endl;

    for (int i = 0; i < 7; i++) {
        cout << "Day " << i+1 << ": ";
        cin >> BugCollector[i];
    }

    int TotalBugs_Collected = 0;

    for (int i = 0; i < 7; i++) {
        TotalBugs_Collected = TotalBugs_Collected + BugCollector[i];
    }

    cout << "Total Number of Bugs Collected is " << TotalBugs_Collected << endl;

    return 0;
}