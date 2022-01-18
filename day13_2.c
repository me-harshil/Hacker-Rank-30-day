/*The array-form of an integer num is an array representing its digits in left to right order.

For example, for num = 1321, the array form is [1,3,2,1].

Given num, the array-form of an integer, and an integer k, return the array-form of the integer num + k.
Sample Input 0

4
1 2 0 0
34
Sample Output 0

1 2 3 4
Explanation 0

1200 + 34 = 1234
*/
#include<stdio.h>
#include<math.h>
int main(){
    int length,num[110],k,i,sum=0,j,n=0,temp,total;
    scanf("%d",&length);
    for(i=0;i<length;i++)
    scanf("%d",&num[i]);
    scanf("%d",&k);

    for(i=length,j=0;length>0;length--,j++)
        sum+=pow(10,length-1)*num[j];
    total=sum+k;
    for(i=0;total>0;i++,total/=10){
        num[i]=total%10;
        n++;
    }
    for(i=0,j=n-1;i<n/2;i++,j--){
        temp=num[i];
        num[i]=num[j];
        num[j]=temp;
    }
    for(i=0;i<n;i++)
        printf("%d ",num[i]);
    
} 