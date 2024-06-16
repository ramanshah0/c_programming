#include <stdio.h>
int main(){
int n1,n2,g,hcf=1,lcm=1;
printf("Enter any two numbers = ");
scanf("%d%d",&n1,&n2);
g=n1;
if(n2>n1){
    g=n2;
}
for (int i=1;i<=g;i++){
    if (n1%i==0&&n2%i==0){
    hcf*=i;
}
}
lcm=(n1*n2)/hcf;
printf("HCF =%d & LCM=%d",hcf,lcm);
return 0;
}
