/*Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's, and return the matrix.

You must do it in place
Sample Input 1
3
4
0 1 2 0
3 4 5 2
1 3 1 5
Sample Output 1
0 0 0 0
0 4 5 0
0 3 1 0*/
#include<stdio.h>
int main(){
    int n,i,a[50][50],m,j,ans[50]={-1,-1},l=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]==0){
            ans[l]=i;
            ans[l+1]=j;
            l=l+2;
            }
        }
    }
    l=0;
    for(i=0;i<m;i++){
        if(i==ans[l])
        {
            for(j=0;j<n;j++)
            a[i][j]=0;
    l=l+2;
        }
    }
    l=1;
    for(i=0;i<n;i++){
        if(i==ans[l]){
            for(j=0;j<m;j++)
            a[j][i]=0;
            l=l+2;
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
}
