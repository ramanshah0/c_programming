#include<stdio.h>
int main(){
float n1,n2,result;
char sign;
printf("Enter your sign(+,-,*,/)=");
scanf("%c",&sign);
printf("Enter your first digit=");
scanf("%f",&n1);
printf("Enter your second digit=");
scanf("%f",&n2);


if(sign=='*'){
        result=n1*n2;

printf("your ans is %f",result);
}
else if(sign=='+'){
        result=n1+n2;

printf("your ans is %f",result);
}
else if(sign=='-'){
        result=n1-n2;

printf("your ans is %f",result);
}
else if(sign=='/'){
        result=n1/n2;

printf("your ans is %f",result);
}

return 0;
}
