/*Given a list of integers nums, remove numbers that appear multiple times in the list, while maintaining order of the appearance in the original list.

It should use O(k) space where k is the number of unique integers.

Sample Input 0
7
1 3 5 0 3 5 8
Sample Output 0
1 0 8
Explanation 0
Only [1, 0, 8] are unique in the list and that's the order they appear in.*/
#include<stdio.h>
int main(){
    int n,a[1000],i,j,flag;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        flag=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j] && i!=j){
                flag=1;
                break;
            }
        }
        if(flag==0)
        printf("%d ",a[i]);
    }
}