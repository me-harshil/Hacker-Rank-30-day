/*Given a string s representing a number in base 3 (consisting only of 0, 1, or 2), return its decimal integer equivalent. This should be implemented directly without using a built-in function.

If s = "10", 
Then output will be 3.*/
#include<stdio.h>
#include<math.h>
int main(){
    int i,n,sum=0;
   scanf("%d",&n);
    for(i=0;n>0;i++,n/=10)
        sum+=pow(3,i)*(n%10);
    printf("%d",sum);
}