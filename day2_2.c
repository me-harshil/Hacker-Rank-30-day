/*Given a decimal number as input, we need to write a program to convert the given decimal number into equivalent binary number.*/
#include<stdio.h>
int main(){
    int n,x[100],i,r;
    printf("n=");
    scanf("%d",&n);
    for(i=1;n>0;i++){
        r=x[i]=n%2;
        printf("x[%d]=%d\n",i,r);
        n=n/2;
    }
    for(;x[i]>=0;i--){
        if(i==1)
        break;

        printf("%d",x[i-1]); 
    }
}