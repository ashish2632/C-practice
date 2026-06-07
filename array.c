# include <stdio.h>
 int main() {
int num[5];
 int sum = 0;
for(int i=0; i<5; i++) {
printf("Number %d daal:", i+1);
scanf("%d", &num[i]);
 sum=sum+num[i];
 }
printf("Total sum= %d\n", sum);

 printf("Average=%d\n", sum/5);
return 0;
 }
