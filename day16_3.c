/*Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image.

To flip an image horizontally means that each row of the image is reversed.

For example, flipping [1,1,0] horizontally results in [0,1,1].
To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0.

For example, inverting [0,1,1] results in [1,0,0].
Example 1:

Input:

image = [[1,1,0],[1,0,1],[0,0,0]]
Output:

[[1,0,0],[0,1,0],[1,1,1]]
Explanation:

First reverse each row: [[0,1,1],[1,0,1],[0,0,0]].
Then, invert the image: [[1,0,0],[0,1,0],[1,1,1]]

Sample Input 0

3
1 1 0
1 0 1
0 0 0
Sample Output 0

1 0 0
0 1 0
1 1 1
Explanation 0

First reverse each row: [[0,1,1],[1,0,1],[0,0,0]]. Then, invert the image: [[1,0,0],[0,1,0],[1,1,1]]*/
#include<stdio.h>
int main(){
    int n,i,a[100][100],j,temp,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++){
        for(j=n-1,k=0;k<n/2;j--,k++){
            temp=a[i][k];
            a[i][k]=a[i][j];
            a[i][j]=temp;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]==0)
            a[i][j]=1;
            else
            a[i][j]=0;
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}