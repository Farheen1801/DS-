#include <stdio.h>
// Function to merge two halves
void merge(int arr[], int  low, int mid, int high) {
    int i,j,k;
    int B[high+1];                   // i=index of left sub array
    i=low;j=mid+1;k=low;            // j=index of right sub array
                                   // k= index of sorted array
    while (i <= mid && j <= high) {
        if ( arr[i] <=  arr[j]) {
             B[k] =  arr[i];
            i++;
            k++;
        } else {
             B[k] =  arr[j];
            j++;
            k++;
        }
    }

    // Copy remaining elements of  arr1[] sub-array
    while (i <=mid) {
         B[k] =  arr [i];
        i++;
        k++;
    }

    // Copy remaining elements of  arr2[] sub-array
    while (j <= high ) {
         B[k] =  arr[j];
        j++;
        k++;
    }
    // Copy merged elements back to arr[]
for (int x = low; x <= high; x++) {
    arr[x] = B[x];
}
}

// Recursive merge sort function
void mergeSort(int arr[], int low, int  high) {
    if ( low <  high) {
        int mid = (low +high)/ 2;

        // Sort first and second halves
        mergeSort(arr,  low, mid);
        mergeSort(arr, mid + 1,  high);

        // Merge the sorted halves
        merge(arr,  low, mid, high);
    }
}

// print array function:
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}