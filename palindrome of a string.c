#include<stdio.h>
#include<string.h>
int main(){
int ft=0,last, length,real;
char words,str[100];
printf("Enter any word = ");
scanf("%s",str);
 length=strlen(str);
 last=length-1;
real=str;

while(ft<last){
words=str[ft];
str[ft]=str[last];
str[last]=words;
ft++;
last--;
}

if(strcmp(real, str) == 0){
    printf("palin");
}else{
printf("not a palin");
}
return 0;
}
