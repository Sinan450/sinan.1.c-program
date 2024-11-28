#include <stdio.h>
#include <string.h>
int main()
{
    int num,reversed=0,remainnder,original;
    printf("enter an integer");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        remainnder=num % 10;
        reversed=reversed*10+remainnder;
        num/=10;
    }
    if(original=reversed){
        printf("%d the number is palindrom\n",original);
    }
    else{
        printf("%d is not palindrom\n",original);
    }
return 0;
}
