#include <stdio.h>

int main() {
    int n, i;
    printf("Kitne numbers? ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d numbers: ", n);
    for(i=0; i<n; i++) scanf("%d", &arr[i]);

    printf("Reverse: ");
    for(i=n-1; i>=0; i--) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
