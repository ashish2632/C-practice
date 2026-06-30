#include <stdio.h>

long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Number daal: ");
    scanf("%d", &num);
    
    if (num < 0)
        printf("Negative ka factorial nahi hota\n");
    else
        printf("%d! = %ld\n", num, factorial(num));
    
    return 0;
}
