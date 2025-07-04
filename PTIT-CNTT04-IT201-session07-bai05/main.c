#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int *arr, int low, int high) {
    int pivot = arr[high];
    int i=(low-1);
    for (int j=low; j<high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i+1);
}
void quickSort(int *arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(void) {
    int n=0;
    while (n<=0) {
        printf("enter a number:");
        scanf("%d",&n);
    }
int *arr=(int *)malloc(n*sizeof(int));
    if (arr==NULL) {
        printf("memory allocation error");
        return 1;
    }
    for (int i=0;i<n;i++) {
        printf("arr[%d]=:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("before sorting:\n");
    printArray(arr, n);
    quickSort(arr, 0, n-1);
    printf("after sorting:\n");
    printArray(arr, n);
    return 0;
}
