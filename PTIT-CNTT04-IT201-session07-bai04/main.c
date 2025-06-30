#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubble_sort(char arr[],int n) {
    int i,j;
    for(i=0;i<n;i++) {
        for(j=0;j<n-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                char temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(void) {
    char *arr=(char*)malloc(10*sizeof(char));
    printf("Please enter a string:\n");
    scanf("%s",arr);
    int len=strlen(arr);
    bubble_sort(arr,len);
    printf("The sorted string:\n");
    for(int i=0;i<len;i++) {
        printf("%c",arr[i]);
    }
    return 0;
}
