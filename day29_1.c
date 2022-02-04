/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.
Sample Input 0
5
0 1 0 3 12
Sample Output 0
1 3 12 0 0*/
#include<stdio.h>
int main(){
    int n,i,j,a[100],temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==0){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}