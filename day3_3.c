/*The task is to count the number of elements that occurs exactly floor(N/K) times in the array.
Input:
5 2
1 4 1 2 4
Output:
2
Explanation:
In the given array, 1 and 4 occurs floor(5/2) = 2 times. So count is 2.

First line contains 2 integers N and K seperated by spaces. Second line contains N array elements seperated by spaces.

Input Format

5 2
1 4 1 2 4

Constraints

1 <= N <= 103 1 <= Ai <= 103

Output Format

2

Sample Input 0

5 2
1 4 1 2 4
Sample Output 0

2
*/
#include<stdio.h>
#include<math.h>
int main(){
    int a[100],k,i,j,n,count=0;
    printf("Enter size of array integers\n");
    scanf("%d",&n);
    printf("k=");
    scanf("%d",&k);
printf("enter array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
 for(i=0;i<=n;i++){
        for(j=i+1;j<=n;j++){
        if(a[i]==a[j]){
                count++;
            }
        }
    }
    printf("count=%d",count);
}