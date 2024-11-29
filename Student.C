#include<stdio.h>
 struct student{
char name[50], college[50],department [50];
int age[];
};
int main(){
  struct student s1;
  printf("entr the name\n");
  scanf("%s\n",s1.name);
  printf ("enter the college name");
    scanf("%s\n", s1. college);
  printf ("enter the department\n");
  scanf("%s\n",s1.department);
  printf("eneter the age\n");
  scanf("%d\n",s1.age);
printf ("\nstudent details\n");
  printf ("name:%s, college:%s, department:%s, age:%d\n", s1. name.college. department. age) ;
  return 0;
 }
