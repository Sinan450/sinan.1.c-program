#include <stdio.h>
int factroial(int n){
    if(n==0){
        return 1;
    }
    return n*factroial(n-1);
        }
int main(){
    int num;
printf("enter the number");
scanf("%d",&num);
printf("factroial =%d\n",factroial(num));
return 0;
}

