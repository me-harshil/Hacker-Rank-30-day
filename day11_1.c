/*You are given a list of integer rooms and an integer target. Return the first integer in rooms that's target or larger. If there is no solution, return -1. Example 1: Input:

length=5
rooms = [15, 10, 30, 50, 25]
target = 20
*/
#include<stdio.h>
int main(){
    int a[100],n,target,i,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    scanf("%d",&target);
    for(i=0;i<n;i++){
        if(target<a[i]){
            printf("%d",a[i]);
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("-1");
}