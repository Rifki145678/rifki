#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Return index if target is found
        }
    }
    return -1;  // Return -1 if target is not found
}

int main() {
    int arr[] = {3, 5, 1, 4, 2};
    int target = 4;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = linearSearch(arr, size, target);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
