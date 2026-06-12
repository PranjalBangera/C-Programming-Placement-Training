//Contains Duplicate
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 5};
    int n = 5, found = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                found = 1;
            }
        }
    }

    if(found)
        printf("Duplicate Found");
    else
        printf("No Duplicate");

    return 0;
}