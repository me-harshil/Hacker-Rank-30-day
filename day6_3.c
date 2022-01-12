/* Given an array of integers of size n. Our aim is to calculate the maximum sum of k consecutive elements in the array.
Input : n = 10
k = 4
arr[] = 1, 4, 2, 10, 23, 3, 1, 0, 20
Output : 39
We get maximum sum by adding subarray {4, 2, 10, 23} of size 4.
There is no subarray of size 3 as size of the whole array is 2.

Input Format

n = 10
k = 4
arr[] = 1, 4, 2, 10, 23, 3, 1, 0, 20, 1 

Constraints

k < n

0 < n < 100

Output Format

39 */
#include<stdio.h>
int main(){
    int a[100],n,i,j,k,sum=0,max;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

max=0;
    for(i=0;i<n-k+1;i++){
        for(j=i;j<k+i;j++){
            sum+=a[j];
            if(j==k+i-1){
            printf("sum=%d\n",sum);
                if(max<sum){
                    max=sum;
                }
            sum=0;
            }
        }
    }
    printf("\nmax=%d",max);
}