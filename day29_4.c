/*Given a two-dimensional integer matrix, where every row and column is sorted in ascending order, find the kth (0-indexed) smallest number.
Sample Input 0

3
3
4
1 3 30
2 3 31
5 5 32
Sample Output 0
5*/
#include<stdio.h>
int main(){
    int n,i,j,a[50],m,k,temp;
    scanf("%d%d%d",&m,&n,&k);
    for(i=0;i<n*m;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n*m-1;i++){
        for(j=i+1;j<n*m;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%d",a[k]);
}