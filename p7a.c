#include <stdio.h>

int readArray(int *arr, int size){
    printf("Enter elements of array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}


void printArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int revArray(int *arr, int size){
    int temp;

    for(int i=0; i<size/2;i++){
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
    return 0;
}

int main(){
    int n;
    printf("This program is made to reverse the sequence in whih you input numbers");
    printf("\nEnter number of elements you want to enter: ");
    scanf("%d", &n);
    if (n <= 0) {
    printf("Invalid size\n");
    return 0;
    }

    int arr[n];

    readArray(arr,n);
    printArray(arr,n);
    revArray(arr,n);
    printArray(arr,n);
}
