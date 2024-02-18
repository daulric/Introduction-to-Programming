// Bug Collector

#include <iostream>

using namespace std;

int main() {

    int totalBugs = 0, bugsInput = 0;

    cout << "==== Bugs Collector ====" << endl;

    for (int i = 1; i <= 7; i++) {
        cout << "How many bugs were collected on day " << i << ": ";
        cin >> bugsInput;
        totalBugs += bugsInput;
    }

    cout << "Total Bugs Collected is " << totalBugs << endl;

    return 0;
}