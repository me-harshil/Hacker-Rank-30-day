/*Given a number N, check whether the number is an Phoenix number or not.
A number is called Phoenix number if and only if its square ends in the same digits as the number itself.
Input: N = 76
Output: Phoenix number
Explanation:
76^2 = 5776 which ends with 76 therefore it is an Phoenix number.
if it is not then print Not a phoenix number*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
if(n%10==n*n%10)
printf("Phoenix number");
else
printf("Not a phoenix number.");
}