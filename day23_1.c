/*Given a two-dimensional matrix of integers matrix, determine whether it's a Phoenix matrix. A Phoenix is one where every diagonal descending from left to right has the same value.

Sample Input 0
3
4
1 2 3 4
5 1 2 3
9 5 1 2
Sample Output 0
true
Explanation 0
In the above grid, the diagonals are: "[9]", "[5, 5]", "[1, 1, 1]", "[2, 2, 2]", "[3, 3]", "[4]". In each diagonal all elements are the same, so the answer is true.*/
#include<stdio.h>
int main(){
    int i,j,m,n,a[50][50],flag=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<m-1;i++){
        for(j=0;j<n-1;j++){
            if(a[i][j]!=a[i+1][j+1])
            flag=1;
            else
            continue;
        }
    }
if(flag==1)
printf("false");
else
printf("true");
}