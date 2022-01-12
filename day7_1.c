/*Given a list of integers nums and an integer k, return true if you can remove exactly one element from the list to make the average equal to exactly k.

Input Format

Here n is length of nums, k is the avetage number and nums is the array.
n = 4
k = 2
nums = [1, 2, 3, 10]

Constraints

2 ≤ n ≤ 1,000 where n is length of nums
nums[i], k ≤ 1,000,000

Output Format

true

Sample Input 0

4
2
1 2 3 10
Sample Output 0

true
Explanation 0

We can take 10 out to reach an average of 2 since (1 + 2 + 3) / 3 = 2

Sample Input 1

2
2
1 3
Sample Output 1

false
*/
#include<stdio.h>
int main(){
    int a[1000],k,i,sum=0,n;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

//not work for n=5 k=2 n={ 2 2 5 2 2 }
    for(i=0;i<n;i++){
        sum+=a[i];
        printf("sum=%d\n",sum);
        if(sum/(n-1)==k){
        printf("true");
        break;
        }
    }
    if(sum/(n-1)!=k)
    printf("false");
}