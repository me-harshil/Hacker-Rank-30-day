/*You are given a list of integers nums which contains at least one 1. Return whether all the 1s appear consecutively.

Example 1
Input
nums = [0, 1, 1, 1, 2, 3]
Output
true
Explanation
All the 1s appear consecutively here in the middle.
Example 2
Input
nums = [1, 1, 0, 1, 1]
Output
false
Explanation
There's two groups of consecutive 1s.*/
#include<stdio.h>
int main(){
    int n,i,a[1000],j,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++){ 
            if(a[i]==1 && a[i+1]!=1){
                for(j=i+2;j<n;j++){
                    if(a[j]==1){
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==1)
            break;
    }
    if(flag==1)
    printf("false");
    else
    printf("true");
}