#include<stdio.h>
#include<string.h>
int main(){
int ft=0,last, length,rem;
char words,str[100];
printf("Enter any word = ");
scanf("%s",str);
 length=strlen(str);
 last=length-1;
while(ft<last){
words=str[ft];
str[ft]=str[last];
str[last]=words;
ft++;
last--;
}

printf("%s",str);
return 0;
}
