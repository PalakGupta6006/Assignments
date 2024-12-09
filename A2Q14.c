/*Q14. Given an array of n integers. The task is to print the duplicates in the given array.
If there are no duplicates then print -1.
Examples:
Input: {2, 10,10, 100, 2, 10, 11,2,11,2}
Output: 2 10 11
Input: {5, 40, 1, 40, 100000, 1, 5, 1}
Output: 5 40 1 */

#include <stdio.h>

void printDuplicates(int arr[], int n) {
    int i, j;
    int visited[n];

    for (i = 0; i < n; i++) {
        visited[i] = 0;
    }

    for (i = 0; i < n; i++) {
        if (visited[arr[i]] == 1) {
            printf("%d ", arr[i]);
        } else {
            visited[arr[i]] = 1;
        }
    }
}

int main() {
    int arr[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printDuplicates(arr, n);

    return 0;
}