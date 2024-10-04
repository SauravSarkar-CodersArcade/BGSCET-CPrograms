#include <stdio.h>
void countSort(int arr[], int size){
    //Find Max
    int k = arr[0];
    for (int i = 1; i < size; ++i) {
        if(arr[i] > k)
            k = arr[i];
    }
    // count array 0-9 size = 10
    int count[10] = {0};
    // Calculate the freq of each element
    for (int i = 0; i < size; ++i) {
        count[arr[i]]++;
    }
    // Cumulative count
    for (int i = 1; i <=k ; ++i) {
        count[i] += count[i-1]; // curr = curr + prev
    }
    // Output array same size as the input array
    int output[size];
    // Start from the end of the array
    for (int i = size-1; i >= 0 ; --i) {
        output[--count[arr[i]]] = arr[i];
    }
    // Copy the output back to the input array
    for (int i = 0; i < size; ++i) {
        arr[i] = output[i];
    }
}
int main() {
    int arr[] = {1,3,2,3,4,1,6,4,3};
    int size = sizeof(arr) / sizeof (arr[0]);
    printf("Before Sorting: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    countSort(arr,size);
    printf("\nAfter Sorting: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}
