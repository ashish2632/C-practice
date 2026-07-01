#include <stdio.h>
  int main()  {
  int n = 29
 int cnt = 0
if(n<=1)
 printf("%d is not prime", n);
    else {
for(int i = 1; i <= n; i++)  {  
if(n % i == 0) 
cnt ++;
}
if(cnt>2)
pritf("%d is not prime",n);
 {
  return 0;
}

