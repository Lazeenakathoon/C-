#include <iostream>
using namespace std;

void swapMaxMin(int arr[], int size) {
    if (size == 0) return;

    int maxIndex = 0, minIndex = 0;

    for (int i = 1; i < size; ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // Swap the max and min values
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}

int main() {
    int numbers[] = {3, 8, 1, 6, 9, 2};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; ++i)
        cout << numbers[i] << " ";
    cout << endl;

    swapMaxMin(numbers, size);

    cout << "Array after swapping max and min: ";
    for (int i = 0; i < size; ++i)
        cout << numbers[i] << " ";
    cout << endl;

    return 0;
}
