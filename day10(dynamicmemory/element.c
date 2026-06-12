//Remove Element
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5, key = 3;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            for(int j = i; j < n - 1; j++)
                arr[j] = arr[j + 1];
            n--;
            break;
        }
    }

    printf("Array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}