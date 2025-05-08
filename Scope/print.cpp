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

// Function to print all prime numbers from 2 to N
void printPrimes(int N) {
    cout << "Prime numbers from 2 to " << N << " are: ";
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            cout << i << " "; // Print prime numbers
        }
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    printPrimes(N); // Call function to print primes

    return 0;
}
