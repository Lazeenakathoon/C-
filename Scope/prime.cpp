#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false; // Numbers <= 1 are not prime

    for (int i = 2; i * i <= num; i++) { // Check up to sqrt(num)
        if (num % i == 0) return false; // If divisible, not prime
    }
    return true; // If no divisors found, it's prime
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;

    return 0;
}
