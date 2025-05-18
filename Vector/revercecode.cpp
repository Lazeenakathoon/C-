#include <iostream>
#include <vector>
using namespace std;

// Function to reverse a vector using pass by reference
void reverseVector(vector<int>& vec) {
    int start = 0;
    int end = vec.size() - 1;

    while (start < end) {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    cout << "Original vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Reversing the vector
    reverseVector(numbers);

    cout << "Reversed vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
