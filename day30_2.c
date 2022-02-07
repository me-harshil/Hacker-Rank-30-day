/*Given an array arr of integers, check if there exists two integers N and M such that N is the double of M ( i.e. N = 2 * M).

More formally check if there exists two indices i and j such that : - i != j - 0 <= i, j < arr.length - arr[i] == 2 * arr[j]

Example 1:

Input: arr = [10,2,5,3]
Output: true
Explanation: N = 10 is the double of M = 5,that is, 10 = 2 * 5.*/
#include<stdio.h>
int main(){
    int i,n,a[100],j,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++){
        for(j=0;j<n;j++){
            if(a[i]==2*a[j]){
                flag=1;break;
            }
        }
        if(flag==1)
        break;
    }
    if(flag==1)
    printf("true");
    else
    printf("false");
}