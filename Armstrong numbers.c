#include<stdio.h>
#include<math.h>
int main(){
int n=0,real,rem,result=0,num,fav;
printf("Enter any numbers =  ");
scanf("%d",&num);
real=num;
fav=num;
while(num!=0){
    num/=10;
    ++n;
}

while(fav!=0){
    rem=fav%10;
    result+=pow(rem,n);
    fav/=10;
}
if(result==real){
printf("armstrong");
}
else{
    printf("not a armstrong");
}

return 0;
}
