/*A happy number is a number defined by the following process:
Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.

For e.g.:

Input:

n = 19
Output:

true
Explanation:

1^2 + 9^2 = 82
8^2 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 0^2 = 1
*/
#include<stdio.h>
#include<math.h>
int main(){
    int n,i=0,sum=0,flag=0,r;
    scanf("%d",&n);

while(sum!=1){
    while (n>0)
    {
        r=n%10;
        sum+=pow(r,2);
        n/=10;
    }
    if(sum==1){
        flag=1;
        break;
    }
    else{
    n=sum;
    sum=0;
    i++;
    }
    if(i>100)
    break;
}
if(flag==1)
printf("true");
else
printf("false");
}

