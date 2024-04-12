#include <stdio.h>
#include <math.h>
int main(){
    int temp,d,n,arm;
    printf("Enter any number = ");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        d=n%10;
    arm+=pow(d,3);
        n=n/10;
    }
   //printf("Armstrong",arm); // 153 = 351
    if(temp==arm){
        printf("Armstrong");
    }
    else{
        printf("!Armstrong");
    }
return 0;
}
