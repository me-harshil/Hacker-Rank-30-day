/*Given a list of integers nums, find a pair i < j, such that nums[i] + nums[j] + (i - j) is maximized, and return the value.
Sample Input 0

6
5 5 1 1 1 7
Sample Output 0

9
Explanation 0

Picking the two 5 is the best since its score is 5 + 5 + 0 - 1 = 9.

If we had picked the rightmost 5 with the 7 we'd get 5 + 7 + (1 - 5) = 8*/
#include<stdio.h>
int main(){
    int n,i,a[100],max=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(a[i]+a[j]+(j-i)>max)
            max=a[i]+a[j]+(j-i);
        }
    }
    printf("%d",max);
}