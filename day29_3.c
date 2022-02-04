/*Given an integer array nums, return the number of elements that have both a strictly smaller and a strictly greater element appear in nums.

Example 1:
Input: nums = [11,7,2,15]
Output: 2
Explanation: The element 7 has the element 2 strictly smaller than it and the element 11 strictly greater than it.
Element 11 has element 7 strictly smaller than it and element 15 strictly greater than it.
In total there are 2 elements having both a strictly smaller and a strictly greater element appear in nums.*/
#include<stdio.h>
int main(){
    int n,i,j,a[100],count=0,k,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        flag=0;
        for(j=0;j<n;j++){
            flag=0;
            if(a[i]<a[j] && i!=j){
                for(k=0;k<n;k++){
                    if(a[i]>a[k] && k!=i){
                        flag=1;
                        count++;
                        break;
                    }
                }
            }
            if(flag==1)
            break;
        }
    }
    printf("%d",count);

    
}