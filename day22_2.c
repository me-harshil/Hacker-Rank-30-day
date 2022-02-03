/*Given a n x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.

Example 1:

Input: grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
Output: 8
Explanation: There are 8 negatives number in the matrix.
Example 2:

Input: grid = [[3,2],[1,0]]
Output: 0*/
#include<stdio.h>
int main(){
    int a[100][100],i,j,n,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
        if(a[i][j]<0)
        count++;
        }
    }
    printf("%d",count);
}