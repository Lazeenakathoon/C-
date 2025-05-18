#include <iostream>
using namespace std;

void printUniqueValues(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        bool isUnique = true;

        for (int j = 0; j < size; ++j) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
int main() {
    int numbers[] = {1, 2, 3, 2, 4, 1, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Unique values in the array: ";
    printUniqueValues(numbers, size);

    return 0;
}
