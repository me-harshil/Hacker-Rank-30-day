/*Given a list of integers nums and an integer k, return the maximum possible index i where nums[0] + nums[1] + ... + nums[i] ≤ k. Return -1 if no valid i exists.
Sample Input 0
5
4
3 -5 4 1 6
Sample Output 0
3
Explanation 0
The largest i here is 3, since we have nums[0] + ... + nums[3] = 3 and if we added the next number (6) the sum would no longer be less than k.
*/
#include<stdio.h>
int main(){
    int n,k,a[1000],sum=0,i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++){
        sum+=a[i];
        if(sum<=k)
        continue;
        else
        break;  
    }
if(a[0]>k)
printf("-1");
else
printf("%d",i-1);
}
