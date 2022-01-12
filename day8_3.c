/*Given two arrays of integers nums and index. Your task is to create a target array under the following rules.
Initially the target array is empty.
From left to right read nums[i] and index[i], insert at index index[i] the value nums[i] in the target array.
Repeat the previous step until there are no elements to read in nums and index.
Return the target array.
It is guaranteed that the insertion operations will be valid.

Input Format

5 5 0 1 2 3 4 0 1 2 2 1

Constraints

0 < nums < 1000 0 < index < 1000

Output Format

0 4 1 3 2
*/
#include<stdio.h>
int main(){
    int n1,n2,a[1000],b[100],i,c[1000],j;
    scanf("%d",&n1);
    scanf("%d",&n2);
    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n1;i++)
    scanf("%d",&b[i]);

for(i=0;i<n1;i++){
    for(j=n2;j>=b[i];j--)
    c[j]=c[j-1];

    c[b[i]]=a[i];
}       
for(i=0;i<n2;i++)
printf("%d ",c[i]);
}
