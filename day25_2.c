/*Given an array of integers arr, return true if the number of occurrences of each value in the array is unique, or false otherwise.

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false*/
#include<stdio.h>
int main(){
    int n,a[100],i,j,temp,b[10],count=1,k=0,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        if(a[i]==a[i+1])
        count++;
        else{
            b[k]=count;
            k++;
            count=1;
        }
    }
    for(i=0;i<k-1;i++){
        for(j=i+1;j<k;j++){
            if(b[i]==b[j]){
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    printf("true");
    else
    printf("false");
}