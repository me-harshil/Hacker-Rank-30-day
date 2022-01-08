/*Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.
Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.
print the length of the new array.

Input:
5 3
1 2 3 4 5
1 2 3
Output:
5
Explanation:
1, 2, 3, 4 and 5 are the elements which comes in the union set of both arrays. So count is 5.*/
#include<stdio.h>
int main(){
    int a[100],b[100],m,n,i,count=0,j,len;
    printf("m=");
    scanf("%d",&m);
    printf("n=");
    scanf("%d",&n);

    for(i=0;i<m;i++)
    scanf("%d",&a[i]);

    for(j=0;j<n;j++)
    scanf("%d",&b[j]);

i=0;
j=0;
printf("i=%d j=%d",i,j);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        if(a[i]==b[j])
        count++;
        }
    }
    len=i+j-count;
    printf("count=%d",len);
}