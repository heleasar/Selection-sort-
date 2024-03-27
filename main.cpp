#include <iostream>

void selectionSort(int arr[], int size);
int findMinIndex(int arr[], int start, int size);

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = findMinIndex(arr, i, size);
        std::swap(arr[i], arr[minIndex]);
    }
}

int findMinIndex(int arr[], int start, int size) {
    int minIndex = start;
    for (int i = start + 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}
