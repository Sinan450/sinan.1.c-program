#include <stdio.h>
#include<string.h>
int main(){
    char str[50],rev[50];
    printf("enter the strinng:");
    scanf("%s",str);
    strepy(rev,str);
    strrev(rev);
    if(stremp(str,rev)==0){
        printf("the string is a palindrom.\n");
    }else{
        printf("the string is not a palindrom.\n");
    }
    return 0;
    }
  
