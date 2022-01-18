/*You are given a list of integers nums. Return the index of every peak in the list, sorted in ascending order. An index i is called a peak if:

nums[i] > nums[i + 1] if i = 0
nums[i] > nums[i - 1] if i = n - 1
nums[i - 1] < nums[i] > nums[i + 1] otherwise
However, a list of length 1 is not considered a peak.
Sample Input 0

5
1 2 3 2 4
Sample Output 0

2 4
Explanation 0

The values at index 2 and 4 are considered peaks since they are larger than their neighbors.
*/
#include<stdio.h>
int main(){
    int n,a[100000],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(a[0]>a[1])
        printf("0 ");
    a[n]=0;
    for(i=1;i<n;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1])
        printf("%d ",i);
    }
}