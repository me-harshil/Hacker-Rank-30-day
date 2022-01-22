/*Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
The fist line of input contains i, that is lenght of the array. The second line of array Nums contains i elements. And the third line contains the target element to be found.*/
#include<stdio.h>
int main(){
    int n,i,a[10000],target;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&target);
    for(i=0;i<n;i++){
        if(a[i]==target)
        { printf("%d",i);
            break;}
        else if(target<a[i] && i!=n-1){
            printf("%d",i);
            break;}
        else if(i==n-1)
            printf("%d",i+1);
    }
}