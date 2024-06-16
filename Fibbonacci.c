#include<stdio.h>
int main(){
int n,ft=0,st=1,nt;
printf("Enter any number=");
scanf("%d",&n);
for (int i=1;i<=n;i++){
    nt=ft+st;
    printf("%d",ft);
    ft=st;
    st=nt;

}
return 0;
}
