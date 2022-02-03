/*Given a 2D integer array matrix, return the interchange of matrix.

The interchange of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.
Sample Input 0

3
3
1 2 3
4 5 6
7 8 9
Sample Output 0

1 4 7
2 5 8
3 6 9*/
#include<stdio.h>
int main(){
    int a[50][50],i,j,n,m,b[50][50];
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        b[j][i]=a[i][j];
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        printf("%d ",b[i][j]);
        printf("\n");
    }
}