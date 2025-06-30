#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }
        }
    }
}

int main(void) {
    int n=0;
    while (n <=0) {
        printf("Enter a number: ");
        scanf("%d", &n);
    }
    int *arr=(int *)malloc(n*sizeof(int));
    if (arr== NULL) {
        printf("Memory allocation error");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = : ", i+1);
        scanf("%d", &arr[i]);
    }

    bubble_sort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}
