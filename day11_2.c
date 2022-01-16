/*Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.If no equilibrium index is found return -1 else return the index. consider the index starting from 0.
For example, in an array A:

length:7
Input: A[] = {-7, 1, 5, 2, -4, 3, 0} 
Output: 3 
Explanation:
3 is an equilibrium index, because: 
A[0] + A[1] + A[2] = A[4] + A[5] + A[6]
*/
#include<stdio.h>
int main(){
    int a[500],n,i,sumLow,sumHigh,j=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=1;i<n;i++){
        sumHigh=0;
        sumLow=0;
        for(j=0;j<i;j++)
        sumLow+=a[j];
        for(k=i+1;k<n;k++)
        sumHigh+=a[k];

        if(sumHigh==sumLow){
        printf("%d",i);
        break;
        }
    }
    if(sumHigh!=sumLow)
    printf("-1");
}