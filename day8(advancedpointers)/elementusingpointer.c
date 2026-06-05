    //large element using pointer
    #include<stdio.h>
    int main()
    {
        int arr[] = {5, 2, 9, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;
    int max = *ptr;
    for (int i = 1; i < n; i++)
    {
        if (*(ptr + i) > max)
            max = *(ptr + i);
    }
    printf("Max element: %d\n", max);
    return 0;
}