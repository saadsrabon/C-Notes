// #include <iostream>
// #include <list>
// #include <string>
// using namespace std;

int main() {
    // Input linked list
    list<string> addresses;
    string address;
    while (cin >> address && address != "end") {
        addresses.push_back(address);
    }

    // Read number of queries
    int Q;
    cin >> Q;

    // Initialize iterator pointing to the start of the list
    auto current = addresses.begin();

    // Process each query
    while (Q--) {
        string command;
        cin >> command;

        if (command == "visit") {
            string target;
            cin >> target;

            // Find the target address in the list
            auto it = addresses.begin();
            bool found = false;
            while (it != addresses.end()) {
                if (*it == target) {
                    found = true;
                    current = it; // Update current position
                    break;
                }
                ++it;
            }

            if (found) {
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }

        } else if (command == "next") {
          
            auto temp = current;
            ++temp;
            if (temp != addresses.end()) {
                ++current; // Move to the next position
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }

        } else if (command == "prev") {
            // Check if moving to the previous element is possible
            if (current != addresses.begin()) {
                --current; // Move to the previous position
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main() 
{
     list<string> addresses; // Input linked list
    string address;
    while (cin >> address && address != "end") {
        addresses.push_back(address);
    }

    // Read number of queries
    int Q;
    cin >> Q;

    // Initialize iterator pointing to the start of the list
    auto current = addresses.begin();

    while(Q--){
        string command;
        cin >> command;
        if(command =="visit"){
            string valueToSearch;
            cin >> valueToSearch;
            auto it = addresses.begin();
            bool found = false;
            while(it!=addresses.end()){
                if(*it == valueToSearch){
                    found = true;
                    current = it;
                    break;
                }
                ++it;
            }
            if(found){
                cout<< *current<<endl;
            }else{
                cout<<"Not Available"<<endl;
            }
        }else if(command == "next"){
            auto temp = current;
            ++temp;
            if(temp!=addresses.end()){
                ++current;
                cout<< *current<<endl;
            }else{
                cout<<"Not Available"<<endl;
            }
        }
    }
    return 0;
}