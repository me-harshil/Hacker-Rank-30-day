/*There is an m x n matrix that is initialized to all 0's. There is also a 2D array indices where each indices[i] = [ri, ci] represents a 0-indexed location to perform some increment operations on the matrix.

For each location indices[i], do both of the following:

Increment all the cells on row ri.
Increment all the cells on column ci.
Given m, n, and indices, return the number of odd-valued cells in the matrix after applying the increment to all locations in indices.
*/
#include<stdio.h>
int main(){
    int m,n,length,i,j,a[100][100],count=0,b[100][100];
    scanf("%d%d%d",&m,&n,&length);
    for(i=0;i<length;i++){
        for(j=0;j<2;j++)
        scanf("%d",&a[i][j]);
    }
for(i=0;i<length;i++){
    for(j=0;j<n;j++)
    b[a[i][0]][j]++;
    for(j=0;j<m;j++)
    b[j][a[i][1]]++;
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        if(b[i][j]%2==1)
        count++;
    }
}
printf("%d",count);
}

