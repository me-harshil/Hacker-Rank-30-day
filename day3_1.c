/*given a number check whether it contains even number of digits or odd number of digits. consider thw sample case given below.

Input Format

12

Constraints

1 <= nums.length <= 500

Output Format

Even

Sample Input 0

12
Sample Output 0

Even*/
#include<stdio.h>
int main(){
    int n,i,a[500];
    printf("n=");
    scanf("%d",&n);
    for(i=0;n>0;i++,n/=10){
        a[i]=n%10;
    }
    if(i%2==0)
    printf("Even");
    else
    printf("Odd");
}