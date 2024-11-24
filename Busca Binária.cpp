#include <stdio.h>

int binary_search(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    int index = binary_search(arr, size, target);
    if (index != -1) {
        printf("Elemento encontrado no índice %d\n", index);
    } else {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}
