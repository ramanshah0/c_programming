#include<stdio.h>
int main(){
int n,table ;
printf("Enter any numbers = ");
scanf("%d",&n);
for(int i=1;i<=10;i++){
    table=n*i;
    printf("%d*%d=%d\n",n,i,table);
}

return 0;
}
