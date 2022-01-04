/*The Collatz sequence is generated sequentially where

n = n / 2 if n is even
n = 3 * n + 1 if n is odd
And the sequence ends if n = 1
N = 11;
Output: 15
Explanation:
The Collatz sequence is: [11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1] and its length is 15.*/
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n%2==0){
        for(i=0;n!=1;i++){
            if(n%2!=0)
            n=n*3+1;
            else
            n=n/2;
        }
    printf("%d",i+1);
    }
    else
    {
        for(i=0;n!=1;i++){
            if(n%2==0)
            n=n/2;
            else
            n=n*3+1;
        }
    printf("%d",i+1);
    }
    
}