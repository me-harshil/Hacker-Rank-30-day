/*Given a list of integers nums, return the number of elements x there are such that x + 1 exists as well.

Explanation:

For e.g.:

nums = [3, 1, 2, 2, 7], 
We can take
1. 1 since 1 + 1 exists in the list.
2. 2 since 2 + 1 exists in the list.
3. Another 2.
So total output is 3.
*/
#include<stdio.h>
int main(){
    int n,i,a[100],j,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[j]==a[i]+1){
            count++;
            break;
            }
        }
    }
    printf("%d",count);
}