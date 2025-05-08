#include <iostream>
using namespace std;

// Function to find the N-th Fibonacci number using switch-case
int fibonacci(int n) {
    switch (n) {
        case 1: return 0; // First Fibonacci number
        case 2: return 1; // Second Fibonacci number
        default:
            int a = 0, b = 1, fib;
            for (int i = 3; i <= n; i++) {
                fib = a + b; // Next Fibonacci number
                a = b;       // Move forward
                b = fib;
            }
            return fib;
    }
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    if (N <= 0)
        cout << "Invalid input! N should be >= 1." << endl;
    else
        cout << "The " << N << "-th Fibonacci number is: " << fibonacci(N) << endl;

    return 0;
}
