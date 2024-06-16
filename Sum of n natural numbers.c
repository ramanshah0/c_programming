#include<stdio.h>
int main(){
int n,sum=0,i=0;
printf("Enter any numbers = ");
scanf("%d",&n);
while(i<=n){
   sum=sum+i ;
   i++;
}
 printf("Sum of the first 100 natural numbers = %d\n",sum);

return 0;
}
