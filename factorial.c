#include <stdio.h>
int main(){
    int n,fact=1;
    printf("Enter any number = ");
    scanf("%d",&n);
    for(int i=1;i<=5;i++){
        fact*=i;
    }
    printf("%d! = %d",n,fact);
return 0;
}
