#include <stdio.h>
int main()
{
  int num ;
  printf("enter the number");
  scanf("%d",&num);
  if(num>0)
  {
    printf("positive");
  }
  else if (num<0)
  {
    printf("negative");
  }
  else
 {
    prntf("zero");
  }
  return 0;
}
