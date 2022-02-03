/*Given a list of integers prices representing prices of cars for sale, and a budget k, return the maximum number of cars you can buy.
Sample Input 0
5
95
90 30 20 40 90
Sample Output 0
3
Explanation 0
We can buy the cars with prices 30, 20, and 40.*/
#include<stdio.h>
int main(){
    int n,i,a[100],k,temp,j,sum=0,l=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        sum+=a[i];
        if(sum<=k)
        l++;
    }
    printf("%d",l);
}