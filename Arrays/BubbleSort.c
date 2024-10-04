#include <stdio.h>
void bubbleSort(int arr[], int n){
    // How many iterations ?
    for (int i = 0; i < n-1; ++i) { // Iterations or Passes
        for (int j = 0; j < n-i-1; ++j) { // Comparisons // Out Of Bounds
            if(arr[j] > arr[j+1]){
                // Swapping
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int arr[] = {7,6,4,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr,n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}
