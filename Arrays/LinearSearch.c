#include <stdio.h>
int linearSearch(int arr[], int n, int key){
    for (int i = 0; i < n; ++i) {
        if(arr[i] == key)
            return i;
    }
    return -1; // Not found
}
int main() {
    int arr[] = {0,-6,4,1,3,6,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = linearSearch(arr,n,600);
    if(index != -1){
        printf("key is found at index %d", index);
    } else{
        printf("Key not found.");
    }
    return 0;
}
