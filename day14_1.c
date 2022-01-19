/*Note: You may not use the same element twice. Numbers can be negative or 0.

Input Format

5 35 8 18 3 22 11

Constraints

n ≤ 100,000 where n is the length of nums

Output Format

True

Sample Input 0

5
35 8 18 3 22
11
Sample Output 0

true
Explanation 0

8 + 3 = 11*/
#include<stdio.h>
int main(){
    int n,i,a[100],k,j,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==k){
                flag=1;
            }
        }
    }
    if(flag==0)
    printf("false");
    else
    printf("true");
}