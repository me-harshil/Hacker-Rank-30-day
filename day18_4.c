/*Given a two-dimensional n x n integer matrix, return the total number of integers whose value is the largest in its row and in its column.
Sample Input
3
1 3 2
6 6 5
1 5 7
Sample Output 
3
Explanation 
The 3 big numbers are 6, 6, and 7.*/
#include<stdio.h>
int main(){
    int n,a[250][250],i,j,k,count=0,flag;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            flag=0;
            for(k=0;k<n;k++){
                if(a[i][j]>=a[i][k])
                continue;
                else{
                    flag=1;
                    break;
                }
            }
            for(k=0;k<n;k++){
                if(a[i][j]>=a[k][j])
                continue;
                else{
                    flag=1;
                    break;
                }
            }
            if(flag!=1)
            count++;
        }
    }
    printf("%d",count);
}