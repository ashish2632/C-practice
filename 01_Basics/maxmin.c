 # include <stdio.h>
 int main() {
int arr[5]={5,10,3,8,9};
 int i;
int max, min;
max=arr[0];
min= arr[0];
  for(i=1; i<5; i++){
if(arr[i]>max){
max=arr[i];
 }
if(arr[i]<min){
min=arr[i];
 }
}
printf("Array:5 10 3 8 9\n");
printf("max= %d\n", max);
printf("min= %d\n", min);
 return 0;
 }
