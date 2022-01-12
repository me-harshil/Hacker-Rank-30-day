/*consider a list of numbers, you will have to find product of those numbers whose product is the highest of all. Input nums = [5, 1, 7] Output 35 Explanation 35 is the largest product that can be made from 5 * 7

Input Format

5 1 7

Constraints

n<10000 where n is the length of list

Output Format

35*/
#include<stdio.h>
int main(){
    int n,x[10000],i,j,mulMax;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);

mulMax=x[i]*x[i+1];
    for(i=0;i<n;i++){
        
        for(j=i+1;j<n;j++){
            if(x[i]*x[j]>mulMax)
            mulMax=x[i]*x[j];
        }
    }
    printf("%d",mulMax);
}