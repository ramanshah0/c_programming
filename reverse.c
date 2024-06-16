#include<stdio.h>
int main(){
int n,num;
printf("Enter any number=");
scanf("%d",&n);
while(n>0){
    num=n%10;
    printf("%d",num);
    n=n/10;
}
}
