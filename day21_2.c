/*Given a positive integer n, determine whether you can make n by summing up some non-negative multiple of 3 and some non-negative multiple of 7.
Sample Input 0
13
Sample Output 0
true
Explanation 0
We can get 13 with 1 * 7 + 2 * 3.*/
#include<stdio.h>
int main(){
    int i,n,sum=0,sum3=0,sum7=0,flag=0;
    scanf("%d",&n);

    for(i=1;i<=n*2;i++){
        sum3=3*i;
        sum=sum3+sum7;
        if(sum==n || sum3==n || sum7==n){
            flag=1;
            break;
        }
        sum7=7*i;
    }
if(flag==0)
printf("false");
else
printf("true");
}