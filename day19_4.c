/*You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]). Find two lines that together with the x-axis form a container, such that the container contains the most water. Return the maximum amount of water a container can store. Notice that you may not slant the container.

Example 1:
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
image

Example 2:
Input: height = [1,1]
Output: 1

Sample Input 1
9
3 2 1 4 3 1 7 2 6
Sample Output 1
24*/
#include<stdio.h>
int main(){
    int i,n,a[1000],j,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
            if(max<(a[i]*(j-i)))
            max=a[i]*(j-i);
            }
            else
            {
            if(max<(a[j]*(j-i)))
            max=a[j]*(j-i);
            }
        }
    }
    printf("%d",max);
}