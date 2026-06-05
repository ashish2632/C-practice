#include <stdio.h>

// function banaya
void printTable(int n){
    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
}

int main(){
    int num;
    printf("Table kis ka chahiye? ");
    scanf("%d", &num);

    printTable(num); // function call
printTable(num+1);
    return 0;
}
