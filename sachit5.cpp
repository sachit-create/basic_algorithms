#include<iostream>
using namespace std;
// Fully efficient code for merging of two sorted arrays. time cmplexity O(n1 + n2).
void array_merge(int arr1[], int arr2[], int merge[], int n1, int n2) {
    int i = 0, j = 0, k = 0;

    // Merge the two arrays using two-pointer technique
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merge[k++] = arr1[i++];
        } else {
            merge[k++] = arr2[j++];
        }
    }

    // If there are remaining elements in arr1
    while (i < n1) {
        merge[k++] = arr1[i++];
    }

    // If there are remaining elements in arr2
    while (j < n2) {
        merge[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int merge[n1 + n2];
    
    array_merge(arr1, arr2, merge, n1, n2);

    for (int i = 0; i < n1 + n2; i++) {
        cout << merge[i] << " ";
    }

    return 0;
}