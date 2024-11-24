#include <stdio.h>

// Fun��o para realizar a busca linear
int linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    int index = linear_search(arr, size, target);
    if (index != -1) {
        printf("Elemento encontrado no �ndice %d\n", index);
    } else {
        printf("Elemento n�o encontrado.\n");
    }

    return 0;
}
