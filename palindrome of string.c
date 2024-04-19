#include <stdio.h>
#include <string.h>
void func(){
    char m[100],n[100];
printf("Enter any word=");
scanf("%s",&m);
int len=strlen(m);
for(int i=0;i<=len;i++){
    n[i]=m[len-1-i];
}
int pal=1;
for(int i=0;i<=len;i++){
if(n[i]!=m[i]){
    pal=0;
}
}
if(pal==1){
    printf("Palindrome");
}
else{
printf("!Palindrome");
}}
int main (){
func();
return 0;
}
