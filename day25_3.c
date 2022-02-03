/*You are given a list of integers nums, representing the number of chess matches each person has won. Return a relative ranking (0-indexed) of each person.

If two players have won the same amount, their ranking should be the same.
Sample Input 0

5
50 30 50 90 10
Sample Output 0

1 2 1 0 3
Sample Input 1

10
50 30 50 90 10 100 120 60 70 60
Sample Output 1

5 6 5 2 7 1 0 4 3 4*/
#include<stdio.h>
int main(){
    int n,i,a[100],j,temp,b[100],k,c[20];
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    b[i]=a[i];}
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;}}}
    j=0;
    for(i=0;i<n;i++){
        if(a[i]!=a[i+1]){
            for(k=0;k<n;k++){
                if(a[i]==b[k]){
                    c[k]=j;
                    j++;
                    break;}}
        }
        else{
             for(k=0;k<n;k++){
                if(a[i]==b[k]){
                    c[k]=j;}}
        } }
    for(i=0;i<n;i++)
    printf("%d ",c[i]);
}