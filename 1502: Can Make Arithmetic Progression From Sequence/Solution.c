#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

bool canMakeArithmeticProgression(int* arr, int arrSize) {
    qsort(arr, arrSize, sizeof(int), compare);
    int diff = arr[1] - arr[0];
    for (int i = 2; i < arrSize; i++) {
        if (arr[i] - arr[i - 1] != diff) {
            return false;
        }
    }
    return true;
}


//standard c main function
int main(int argc, char const *argv[]) {
    int arr[] = {1, 2, 4};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", canMakeArithmeticProgression(arr, arrSize));
    return 0;
}
