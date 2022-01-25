/*An n x n matrix is valid if every row and every column contains all the integers from 1 to n (inclusive).
Given an n x n integer matrix matrix, return true if the matrix is valid. Otherwise, return false.*/
#include<stdio.h>
int main(){
    int i,n,j,a[100][100],k,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
        for(k=j+1;k<n;k++){
            if(a[i][j]!=a[i][k])
            continue;
            else{
                flag=1;
                break;
            }
        }
    }
    for(j=0;j<n-1;j++){
        for(k=j+1;k<n;k++){
            if(a[j][i]!=a[k][i])
            continue;
            else{
                flag=1;
                break;
            }
        }
    }
}
if(flag==0)
printf("true");
else
printf("false");
}