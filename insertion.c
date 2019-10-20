#include <stdio.h>

int* sort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int s = i;
        int key = arr[i];
        while (s > 0) {
            if (key < arr[s - 1]) {
                arr[s] = arr[s - 1];
            } else {
                break;
            }
            s--;
        }
        arr[s] = key;
    }
    return arr;
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {

    int size = 10;
    //sorted: 0,2,3,4,5,7,8,8,9,9
    int arr[] = {9,8,7,5,3,9,8,2,4,0};

    print(sort(arr, size), size);

    return 0;
}
