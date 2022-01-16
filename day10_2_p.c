/*Given a list of integers nums, return the largest integer k where k and -k both exist in nums (they can be the same integer). If there's no such integer, return -1. Example 1:

Input:
    length= 6
    nums = [-4, 1, 8, -5, 4, -8]
Output:
    8
    here 8 is the largest integer where 8 and -8 are present in array
Example 2:

Input:
    length= 4
    nums = [5, 6, 1, -2]
Output:
    -1
    here there is no whose negative and positive format exi*/
#include<stdio.h>
int main(){
    int n,a[100],i,max,j,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

max=a[0];
    for(i=0;i<n;i++){
        if(a[i]==0)
        flag=1;
        else if(max<a[i])
        max=a[i];
        for(j=0;j<n;j++){
            if(max=-a[j]&&max>a[i]){
            max=a[j];
            flag=1;
            }
        }
    }
if(flag==1)
printf("%d",max);
else if(flag==0)
printf("0");
else
printf("-1");
}