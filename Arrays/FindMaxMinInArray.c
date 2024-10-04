#include <stdio.h>
void findMaxMin(int arr[], int n){
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; ++i) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    printf("The Max & Min values are: %d, %d\n", max, min);
}
int main() {
    int arr[] = {2,1,-6,0,7,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    findMaxMin(arr,n);
    return 0;
}
