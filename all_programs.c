// All C Practice Programs Combined

// ========== array.c ==========
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


// ========== ascii.c ==========
# include <stdio.h>
  int main()  {
    char c= 'k';
printf("The ASCII value of  %c is %d", c, c);
return 0;
}  



// ========== ascii2.c ==========
# include <stdio.h>
  int main()  {  
  char  ch= 'A';
   int asciivalue = (int)ch;
  printf("ASCII value of %c is %d\n",ch,asciivalue);
  return 0;
 }
  





// ========== average.c ==========
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


// ========== big.c ==========
# include <stdio.h>
  int main()  
  {  
int a, b, c;
  printf("Enter a=");
    scanf("%d",&a);
 printf("Enter b=");
  scanf("%d",&b);
 printf("Enter c=");
   scanf("%d",&c);
   
if (a>b)
{
 if (a>c)
  {
 printf("\na is gretest.");
  } 
else
  { 
  printf("\nc is gretest.");
   }
}
else
{ 
 if (b>c)
{
 printf("\nb is gretest.");
  } 
    else 
{ 
   printf("\nc is gretest.");
  }
}
  return 0;
  }


// ========== celsius.c ==========
#include <stdio.h>

int main() {
    float f, c;
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    
    c = (f - 32) * 5 / 9;
    
    printf("%.2f°F = %.2f°C\n", f, c);
    
    return 0;
}


// ========== checkprime.c ==========
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



// ========== circle.c ==========
# include <stdio.h>
 int main ()
{
  float  r,c,a;
 printf("Enter radius=");
  scanf("%f" ,&r);
      float pi=3.14;
         c=2*pi*r;
         a=pi*r*r;

   printf("\nCircumfrence of a circle %f",c);
 printf("\nArea of circle %f",a);
return 0;
  }


// ========== condition.c ==========
#include <stdio.h>
 int main() {
  int age=34;
 if(age>18){
printf("you can drive \n");
}
return 0;
}




// ========== condition2.c ==========
#include <stdio.h>
 int main() {
char grade;
  int mark=89;
 if(mark<=100 && mark>=90){
grade = 'A';
}
else if(mark<90 && mark>=80){
grade = 'B';
}
else if(mark<80 && mark>=70){
grade = 'C';
}
else if(mark<70 && mark>=60){
grade = 'D';
}
else{
printf("Fail");
}
printf("grade: %c\n",grade);
return 0;
}


// ========== equal.c ==========
# include <stdio.h>
 int main() {
int a,b;
printf("Enter a=");
scanf("%d", &a);
 printf("Enter b=");
scanf("%d", &b);
 
   if(a==b)
{
printf("\na and b are equal.");
}
else
{
  printf("\na and b are not equal.");
  }
return 0;
}


// ========== even.c ==========
#include <stdio.h>
 int main() {
 int n;
printf("Enter a number:");
 scanf("%d",&n);
if(n % 2 == 0) {
printf("even\n");
}
else {
 printf("odd\n");
} 
return 0;
}



// ========== example1.c ==========
#include <stdio.h>
int main() {
int a = 5, b = 2;
c = a / b;
printf("the value of c is %d");
return 0;
}



// ========== factorial.c ==========
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


// ========== fahrenheit.c ==========
#include <stdio.h>
 int main() {
 float c, f;
printf("Enter temprature in celsius: ");
scanf("%f", &c);
f = (c * 9 / 5) + 32;
printf("%.2f C = %.2f F\n", c, f);
return 0;
 }



// ========== func_table.c ==========
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


// ========== income.c ==========
#include <stdio.h>
int main() {
 float income, tax=0;
printf("Enter your income:");
 scanf("%f", &income);
if(income<=250000){
tax = 0;
}
else if(income>250000 && income<=500000){
tax = 0.05 * (income-250000);
}
else if(income>500000 && income<=1000000){
tax = 0.05 * (income-250000) + 0.2 * (income-500000);
}
else{
tax = 0.05 * (income-250000) + 0.2 * (income-500000) + 0.3 * (income-1000000);
}
printf("Total tax is %f\n", tax);
return 0;
 }



// ========== inputmax.c ==========
#include <stdio.h>

int main() {
    int arr[5], i, max, min;
    printf("Enter 5 numbers: ");
    for(i=0; i<5; i++) scanf("%d", &arr[i]);
    max = min = arr[0];
    for(i=1; i<5; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    printf("Max = %d, Min = %d\n", max, min);
    return 0;
}


// ========== interest.c ==========
#include <stdio.h>
int main(){
 float p, r, t;
printf("Enter the princile amount:");
scanf("%f", &p);
printf("Enter the ratio of interest:");
scanf("%f", &r);
printf("Enter the time:");
scanf("%f", &t);
printf("the simple interest is %f",(p*r*t)/100);
return 0;
}



// ========== leap.c ==========
#include <stdio.h>
 int main() {
int year;
printf("Enter year:\n");
scanf("%d", &year);
 if((year %4==0 && year%100!=0) || year %400==0) {
 printf("This is a leap year:\n");
}
else{
printf("This is not a leap year:\n");
}
return 0;
}



// ========== maxmin.c ==========
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


// ========== prime.c ==========
#include <stdio.h>

int main() {
    int n, i, isPrime = 1;
    
    printf("Number daal: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d Prime hai\n", n);
    else
        printf("%d Prime nahi hai\n", n);

    return 0;
}


// ========== prime2.c ==========
#include <stdio.h>
int main(){
    int n, cnt = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if(n <= 1){
        printf("%d is NOT prime", n);
    }
    else{
        for(int i = 1; i <= n; i++){
            if(n % i == 0)
                cnt++;
        }
        
        if(cnt > 2)
            printf("%d is NOT prime", n);
        else
            printf("%d is prime", n);
    }
    return 0;
}


// ========== pro.c ==========
// C program to demonstrate the
// area and perimeter of rectangle
#include <stdio.h>

int main()
{

    int l = 10, b = 10;
    printf("Area of rectangle is : %d", l * b);
    printf("\nPerimeter of rectangle is : %d", 2 * (l + b));
    return 0;
}


// ========== problem.c ==========
#include <stdio.h>
 int main() {
int marks1, marks2, marks3;
 printf("Enter marks1:\n");
scanf("%d", &marks1);
 printf("Enter marks2:\n");
scanf("%d", &marks2);
 printf("Enter marks3\n");
scanf("%d", &marks3);
printf("the marks are %d %d and %d\n", marks1, marks2, marks3);
if(marks1<33|| marks2<33 || marks3<33){
printf("you are failed due too less marks in individual subject:\n");
}
else {
printf("you are pssed:\n");
}
return 0;
}


// ========== problem2.c ==========
#include <stdio.h>
 int main() {
int marks1, marks2, marks3;
 printf("Enter marks1:\n");
scanf("%d", &marks1);
 printf("Enter marks2:\n");
scanf("%d", &marks2);
 printf("Enter marks3\n");
scanf("%d", &marks3);
printf("the marks are %d %d and %d\n", marks1, marks2, marks3);
if(marks1<33|| marks2<33 || marks3<33){
printf("you are failed due too less marks in individual subject:\n");
}
else if((marks1+marks2+marks3)/3 <40){
printf("you are failed due too less percentage\n");
}
else {
printf("you are pssed:\n");
}
return 0;
}



// ========== reverse.c ==========
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


// ========== simole.c ==========
# include <stdio.h>
int main() {
 int num[2];

num[0]=5;
num[1]=7;
printf("pehla = %d\n", num[0]);
printf("dusra = %d\n", num[1]);
printf("jod = %d\n", num[0] + num[1]);
return 0;
}


// ========== simole2.c ==========
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


// ========== simple.c ==========
#include  <stdio.h>  
  int main(){
int r;
printf("Enter the radius of the circle:");
 scanf("%d", &r);
 printf("the area of circle with radius %d is %f", r, 3.14*r*r);
return 0;
}



// ========== sum.c ==========
#include <stdio.h>
  int main()  {
 int a, b, sum;
printf("Enter first number:");
 scanf("%d",&a);
printf("Enter second number:");
 scanf("%d",&b);
 sum = a + b;
 printf("sum = %d\n", sum);
return 0;
  }



// ========== swap.c ==========
 #include <stdio.h>  
  int main()  {
  int a = 5, b = 10;
  a = a + b;
  b = a - b;
  a = a - b;
printf("a = %d, b = %d\n", a, b);
return 0; 
   }



// ========== switch.c ==========
#include <stdio.h>
 int main() {
 int a;
 printf("Enter a: ");
 scanf("%d", &a);
switch(a){
case 1:
printf("you entered 1\n");
case 2:
printf("you entered 2\n");
}
return 0;
}



// ========== switch2.c ==========
#include <stdio.h>
 int main() {
 int a;
 printf("Enter a: ");
 scanf("%d", &a);
switch(a){
case 1:
printf("you entered 1\n");
 break;
case 2:
printf("you entered 2\n");
break;
case 3:
printf("you entered 3\n");
break;
case 4:
printf("you entered 4\n");
break;
}
return 0;
}



// ========== swp.c ==========
#include <stdio.h>  
 int main()   {
  int a, b, temp;
printf("Enter first number: ");
   scanf("%d", &a);
printf("Enter second number: ");
     scanf("%d", &b);
 
  temp = a;
 a = b;
 b = temp;
  printf("After swapping:\n");
  printf("a = %d, b = %d\n", a, b);
return 0;
  }



// ========== test-ubuntu.c ==========
#include <stdio.h>
int main(){ printf("From Ubuntu proot!\n"); return 0; }



// ========== two.c ==========
#include <stdio.h>

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int n = 4;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                printf("Index: %d, %d\n", i, j);
                return 0;
            }
        }
    }

    printf("No pair found\n");
    return 0;
}


