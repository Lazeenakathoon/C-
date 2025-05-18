#include <iostream>
using namespace std;

void ChangeArr(int arr[], int size) {
    cout << "In function\n";
    for (int i = 0; i < size; i++) {
        arr[i] = 2 * arr[i];
    }
}

int linearSearch(int arr[], int sz, int target){
   for(int i =0; i < sz; i++){
    if(arr[i] == target){//FOUND
        return i;
    }
   }
   return -1; //NOT FOUND
}

void ReverseArr(int arr[], int sz){
    int start = 0, end = sz - 1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sz = 5;
    
    ReverseArr(arr, sz);
    for(int i = 0; i < sz; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
