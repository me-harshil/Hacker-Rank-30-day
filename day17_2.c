/*The factorial of a number n is defined as n! = n * (n - 1) * (n - 2) * ... * 1. For e.g.: If a = 6, then output will be 3 Explanation 3! = 6*/
#include<stdio.h>
int main(){
    int n,fact=1,i,flag=0;
    scanf("%d",&n);
    for(i=1;fact<=n;i++){
        fact=fact*i;
        if(fact==n){
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("-1");
    else
    printf("%d",i);
}