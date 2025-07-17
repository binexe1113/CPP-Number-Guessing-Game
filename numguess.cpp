#include <iostream>
#include <string>
#include <cctype>  // for isdigit
using namespace std;

int returnInt() {
    string s;
    bool isvalidint = false;

    do {
        cout << "Enter an integer: ";
        getline(cin, s);

        isvalidint = true;  // Assume valid until proven otherwise

        if (s.empty()) {
            isvalidint = false;
            continue;  // ask again
        }

        int start = 0;
        if(s[0]=='-'){
            isvalidint=false;
            cout<<"Try to guess only positive numbers"<<endl;
            continue;
        }
        // Allow leading + or - sign
        if ( s[0] == '+') {
            if (s.size() == 1) { // Only sign, no digits
                isvalidint = false;
                continue;
            }
            start = 1;
        }

        // Check all remaining chars are digits
        for (int i = start; i < (int)s.size(); i++) {
            if (!isdigit(s[i])) {
                isvalidint = false;
                break;
            }
        }

        if (!isvalidint) {
            cout << "Invalid input. Please enter a valid integer.\n";
        }
    } while (!isvalidint);

    // Now safe to convert
    return stoi(s);
}
