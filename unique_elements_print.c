#include <stdio.h>

int main() {
    int arr[100];
    int n, i, j, Unique;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nUnique elements are:\n");

    for (i = 0; i < n; i++) {
        Unique = 1;

        for (j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                Unique = 0;
                break;
            }
        }

        if (Unique == 1) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
