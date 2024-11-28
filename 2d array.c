#include<stdio.h>
int main(){
  int row,cols;
  printf("enter the row and colums:");
    scanf("%d%d",&row,&cols);
  int a[row][cols],b[row][cols],c[row][cols];
  pritnf("enter the elementof matrix a:\n");
  for(int i=0;i<row;i++){
    for(int j - 0;j<cols;j++){
    scanf("%d",&a[i][j]);
    }
}
  pritnf("enter the elementof matrix b:\n");
for(int i=0;i<row;i++){
  for(int j-0;<cols;j++){
  scanf("%d",&b[i][j]);
  }
}
printf("resultent matrix:\n");
for(int i=0;i<row;i++){
    for(int j=0;j<cols;j++){
      printf("%d",sum[i][j]);
    }
  printf("\n");
  }
  return 0;
}
