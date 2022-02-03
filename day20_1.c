/*Given an integer n, return a list with each number from 1 to n, except if it's a multiple of 3 or has a 3, 6, or 9 in the number, it should be the string "clap". Note: return the number as a string.*/
#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
 
 for(i=1;i<=n;i++){
     if(i%3==0 || i%10==3 || i%10==6 || i%10==9)
     printf("clap ");
     else
     printf("%d ",i);
 }
}