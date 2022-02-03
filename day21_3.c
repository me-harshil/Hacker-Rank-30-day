/*Given an m x n matrix of distinct numbers, return all Special numbers in the matrix in any order. A Special number is an element of the matrix such that it is the minimum element in its row and maximum in its column. Return the list of Special numbers.

Example 1:

Input: matrix = [[3,7,8],[9,11,13],[15,16,17]]
Output: [15]
Explanation: 15 is the only Special number since it is the minimum in its row and the maximum in its column.
Example 2:

Input: matrix = [[1,10,4,2],[9,3,8,7],[15,16,17,12]]
Output: [12]
Explanation: 12 is the only Special number since it is the minimum in its row and the maximum in its column.
Example 3:

Input: matrix = [[7,8],[1,2]]
Output: [7]
Explanation: 7 is the only Special number since it is the minimum in its row and the maximum in its column.*/
#include<stdio.h>
int main(){
    int i,n,a[10][10],j,m,l,flag=0;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            flag=0;
            for(l=0;l<m;l++){
                if(a[i][j]<a[l][j]){
                    flag=1;
                    break;  
                }
            }
            for(l=0;l<n;l++){
                if(flag==1)
                break;
                else if(a[i][j]>a[i][l]){
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            printf("%d ",a[i][j]);
        }
    }
}