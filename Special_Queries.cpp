#include <bits/stdc++.h>
using namespace std;

int main() {
    int q; // Number of queries
    cin >> q;

    queue<string> line; // Queue to maintain the order of people
    while (q--) {
        int command;
        cin >> command;

        if (command == 0) {
            string name;
            cin >> name;
            line.push(name); // Add the person to the queue
        } else if (command == 1) {
            if (line.empty()) {
                cout << "Invalid" << endl; // No one in the line
            } else {
                cout << line.front() << endl; // Print the name of the person in front
                line.pop(); // Remove the person from the queue
            }
        }
    }

    return 0;
}
