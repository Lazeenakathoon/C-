#include <iostream>

using namespace std;

int main() {
    int n = 6;

    for(int i = 0; i < n; i++) { // outer loop
        char ch = 'A'; // Corrected 'Char' to 'char'
        
        for(int j = 0; j < n; j++) { // inner loop
            cout << ch;
            ch = ch + 1;
        }
        cout << endl;
    }

    return 0;
}
