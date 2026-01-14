#include <stdio.h>

int main() {
    int arr1[50], arr2[50], merged[100];
    int n1, n2, n, i, j, temp;

    // Input first array
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements of first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements of second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge arrays
    n = 0;
    for(i = 0; i < n1; i++) {
        merged[n++] = arr1[i];
    }
    for(i = 0; i < n2; i++) {
        merged[n++] = arr2[i];
    }

    // Sort merged array in ascending order (simple bubble sort)
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(merged[i] > merged[j]) {
                temp = merged[i];
                merged[i] = merged[j];
                merged[j] = temp;
            }
        }
    }

    // Print the merged sorted array
    printf("Merged array in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
