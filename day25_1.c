/*Given an integer n, return whether its prime factors only include 2, 3 or 5.
Sample Input 0
10
Sample Output 0
true
Explanation 0
10's prime factors are 2 and 5.
Sample Input 1
14
Sample Output 1
false
Explanation 1
14's prime factors include 7.*/
#include<stdio.h>
int main(){
    int n,flag=0;
    scanf("%d",&n);

while(n>1){
    if(n%2==0)
    n=n/2;
    else if(n%3==0)
    n/=3;
    else if(n%5==0)
    n=n/5;
    else{
    flag=1;
    break;
    }
}
if(flag==0)
printf("true");
else
printf("false");
}
