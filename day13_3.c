/*You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent(situated next to or close to something) plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n(number of flowers to be planted), return if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule.
Sample Input 0

5
1 0 0 0 1
1
Sample Output 0

true
Sample Input 1

5
1 0 0 0 1
2
Sample Output 1

false
*/
#include<stdio.h>
int main(){
    int a,flowerbed[1000],i,n,count=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    scanf("%d",&flowerbed[i]);
    scanf("%d",&n);

    for(i=2;i<a-2;i++){
        if(flowerbed[i-1]==0 && flowerbed[i+1]==0){
        flowerbed[i]=1;
        count++;
        }
    }
    if(count==n)
    printf("true");
    else
    printf("false");
}