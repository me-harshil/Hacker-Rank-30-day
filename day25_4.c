/*Given an unsorted integer array nums, return the smallest missing positive integer.

You must implement an algorithm that runs in O(n) time and uses constant extra space.

search for first missing positive number
Sample Input 0
3
1 2 0
Sample Output 0
3
Explanation 0
Here first missing positove number will be 3.*/
#include<stdio.h>
int main(){
    int n,i,a[100],j,flag;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(j=1;j<1000;j++){
        flag=0;
        for(i=0;i<n;i++){
            if(a[i]==j){
                flag=1;
                break;
            }
        }
        if(flag==0){
        printf("%d",j);
        break;
        }
    }
}