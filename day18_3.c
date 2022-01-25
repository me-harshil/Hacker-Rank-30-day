/*You are given a list of integers nums. Return the number of pairs i < j such that nums[i] + nums[j] is equal to 2 ** k for some 0 ≤ k.
input: first line contains N, the number of elements second line contains N elements.
Sample Input
4
1 1 3 5
Sample Output
4              */
#include<stdio.h>
#include<math.h>
int main(){
    int n,a[100000],i,j,k,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            for(k=0;k<=10;k++){
            if(a[i]+a[j]==pow(2,k)){
            count++;
            break;
            }
            }
        }
    }
    printf("%d",count);
}