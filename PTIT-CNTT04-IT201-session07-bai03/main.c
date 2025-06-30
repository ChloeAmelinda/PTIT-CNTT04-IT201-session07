#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;

        }

        arr[j + 1] = temp;

    }
}
int main(void) {
    int n=0;
    while (n<=0) {
        printf("Please input a number:");
        scanf("%d", &n);
    }
    int *arr=(int *)malloc(n*sizeof(int));
    if (arr==NULL) {
        printf("Memory allocation error");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("arr[%d]=", i+1);
        scanf("%d", &arr[i]);
    }
    insertion_sort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d\t",  arr[i]);
    }
    return 0;
}
