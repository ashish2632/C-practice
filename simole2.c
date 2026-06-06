#include <stdio.h>
int main() {
    int num[2];

    printf("Pehla number daal: ");
    scanf("%d", &num[0]);

    printf("Dusra number daal: ");
    scanf("%d", &num[1]);

    printf("pehla = %d\n", num[0]);
    printf("dusra = %d\n", num[1]);
    printf("jod = %d\n", num[0] + num[1]);
    return 0;
}
