/*For e.g.: n = 0 Output will be 0 as no. of 1's in its binary i.e 0 are 0. n = 3 Output will be 2 as no. of 1's in its binary i.e 11 are 2.

Input Format

2

Constraints

0 ≤ n < 2 ** 31

Output Format

1

Sample Input 0

0
Sample Output 0

0
Sample Input 1

1
Sample Output 1

1*/
#include<stdio.h>
int main(){
    int n,a[100],i,count=0;
    scanf("%d",&n);

    for(i=0;n>0;i++,n/=2){
        a[i]=n%2;
        // printf("%d ",a[i]);
        if(a[i]==1)
        count++;
    }
    printf("%d",count);
}