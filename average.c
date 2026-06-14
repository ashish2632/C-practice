#include <stdio.h>
int main(){
int a,b,c,d;
float avg;
printf("Enter 4 numbers: ");
scanf("%d%d%d%d",&a,&b,&c,&d);
avg=(a+b+c+d)/4.0;
printf("Average=%.2f\n",avg);
return 0;
}
