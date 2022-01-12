/*Given a list of integers prices representing the stock prices of a company in chronological order, return the maximum profit you could have made from buying and selling that stock once. You must buy before you can sell it.

Note: You are not required to buy or sell the stock. example: Input Length of prices = 6 prices = [9, 11, 8, 5, 7, 10] Output 5 Explanation You can buy at 5 and sell at 10. As 5 is the minimum price of the stock we may buy at 5 and sell at 10 as it is increasing. our profit might have been zero if the price would have decreased.

Input Format

6 9 11 8 5 7 10

Constraints

n ≤ 100,000 where n is the length of prices

Output Format

5

Sample Input 0

6
9 11 8 5 7 10
Sample Output 0

5
Sample Input 1

9
9 8 7 6 5 4 3 2 1 
Sample Output 1

0
*/
#include<stdio.h>
int main(){
    int n,a[100000],i,j,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

max=a[1]-a[0];

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(max>0 && max<a[j]-a[i])
            max=a[j]-a[i];
        }
    }
    if(max<=0)
    printf("0");
    else
    printf("%d",max);
}