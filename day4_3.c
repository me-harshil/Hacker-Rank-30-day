/*Given an array arr[] of n integers. Check whether it contains a triplet that sums up to zero.
For eg:
0, -1 and 1 forms a triplet with sum equal to 0.

Input Format

n = 5,
arr[] = {0, -1, 2, -3, 1}

Constraints

1 <= n <= 104

Output Format

true

Sample Input 0

5
0 -1 2 -3 1
Sample Output 0

true*/
#include<stdio.h>
int main(){
    int a[104],n,i,j,k,result=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-2;i++){
        for(j=i+1;j<n-1;j++){
            for(k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==0)
                result=1;
            }
        }
    }
    if(result==1)
    printf("true");
    else
    printf("false");
}