#include<stdio.h>
int main(){
int n ,num,rev,orginal;
printf("Enter any numbers=");
scanf("%d",&n);
orginal=n;
while(n>0){
num=n%10;
rev=rev*10+num;
n=n/10;}
if(orginal==rev){
    printf("palindrome");
}else{
printf("not a palindrome ");
}


return 0;
}
