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
