/*find out the possible positions with a people in front and b people behind in a line of n people.
You are given integers n, a and b. You are standing in a line of n people. You don't know which position you're in, but you know there are at least a people in front of you and at most b people behind you.
Return the number of possible positions you could be in.
Example 1:
Input:
n = 10
a = 3
b = 4
Output:
5
Explanation
There's 10 people and at least 3 are in front and at most 4 are behind.
so total : 1,2,3,4,5,6,7,8,9,10
at least 3 in front: 4,5,6,7,8,9,10
at most 4 behind: 6,7,8,9,10

Input Format

n = 10
a = 3
b = 4*/
#include<stdio.h>
int main(){
    int n,a,b,i,count=0;
    printf("n=");
    scanf("%d",&n);
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);

for(a=a+1;a<=n;a++){
    if(n-a<=b)
    count++;
}
printf("%d",count);
}