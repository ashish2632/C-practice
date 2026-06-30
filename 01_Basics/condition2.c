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
