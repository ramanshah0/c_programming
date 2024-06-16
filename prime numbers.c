#include<stdio.h>
int main(){
int n=100,i=2;
printf("%d\n",2);
printf("%d\n",3);
while(i<=100){
    if(i%2 !=0 && i%3 !=0){
        printf("%d\n",i);
    }
      i++;
}
return 0;
}
