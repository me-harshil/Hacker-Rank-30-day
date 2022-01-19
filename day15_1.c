/*Given a list of positive integers nums, return whether there exist integers a, b, and c such that a ** 2 + b ** 2 = c ** 2.
Sample Input 0
5
5 1 4 7 3
Sample Output 0
true
Explanation 0
3, 4, 5 are in the array and 3^2 + 4^2 = 5^2.*/
#include<stdio.h>
#include<math.h>
int main(){
    int n,i,a[100000],j,k,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=0;k<n;k++){
                if(pow(a[i],2)+pow(a[j],2)==pow(a[k],2)){
                    flag=1;
                    break;}}}}
    if(flag==1)
    printf("true");
    else
    printf("false");
}