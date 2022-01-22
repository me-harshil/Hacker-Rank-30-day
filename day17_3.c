/*Given a square n x n matrix, return the sum of the matrix diagonals.

Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.
Sample Input 0
3
1 2 3
4 5 6
7 8 9
Sample Output 0
25
Explanation:
Diagonals sum: 1 + 5 + 9 + 3 + 7 = 25
Notice that element mat[1][1] = 5 is counted only once.*/
#include<stdio.h>
int main(){
    int n,a[100][100],i,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j || i==n-1-j )
                sum+=a[i][j];
        }
    }
    printf("%d",sum);
}