#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << char('A' + i); // Convert ASCII value to character
        }
        cout << endl;
    }

    return 0;
}

