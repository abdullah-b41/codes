#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the number to compare: ");
    scanf("%d", &target);

    int found = 0;

    printf("\nAll pair products:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {  // skip same index pairing
                int product = arr[i] * arr[j];
                printf("arr[%d] x arr[%d] = %d x %d = %d\n", i, j, arr[i], arr[j], product);

                if (product == target) {
                    found = 1;
                }
            }
        }
    }

    printf("\nResult: %s\n", found ? "Yes" : "No");
    return 0;
}
