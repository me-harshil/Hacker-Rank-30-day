/*Given a list of integers nums, return whether the largest number is bigger than the second-largest number by more than two times.
Array can be in unsorted manner.

Input Format

n = 3 nums = [3, 9, 6]

Constraints

2 ≤ n ≤ 100,000 where n is the length of nums

Output Format

false
9 is not bigger than 2 * 6.

Sample Input 0

3
3 19 9
Sample Output 0

true
Sample Input 1

3
3 6 12
Sample Output 1

false
Explanation 1

12 is not bigger than 2 * 6, they're equal.
*/
#include<stdio.h>
int main(){
    int a[1000],n,i,temp,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n-1;i++){
        for(j=i;j<n;j++){
            if(a[i]<a[j]){ //a[i]=4 a[j]=5
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    if(a[0]>2*a[1])
    printf("true");
    else
    printf("false");
}