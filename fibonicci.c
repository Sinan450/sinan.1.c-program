#include <stdio.h>

int main()
{
int n,t1=0,t2=1,next term;
   printf("enter the number of term");
   scanf("%d",&n);
   printf("fibonacci series:%d,%d",t1,t2);
   for(int i=3;i<=n;++i);
   next term=t1+t2; 
   printf("%d",next term);
   t1=t2;
   t2=next term;
   }
return 0;
}
