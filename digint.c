#include <stdio.h>
void func(){
    int temp,n,digit=0;
printf("Enter any number=");
scanf("%d",&n);
while(n!=0){
    temp=n%10;
    digit++;
    n/=10;
}
printf("No. of digits = %d",digit);
}
int main (){
func();
return 0;
}
