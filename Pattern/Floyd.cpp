#include <iostream>
using namespace std;

int main() {
    int n = 4;
    char ch = 'A'; // Initialize character

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j > 0; j--) { // Backward count for row
            cout << ch << " ";
            ch++; // Increment character
        }
        cout << endl;
    }

    return 0;
}


