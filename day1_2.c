/*Raam is superstitious. He will only use a particular digit of number as a roll number if its sum of digits is 11. Find those numbers having sum 11.
Here, find the Nth number having sum 11. So, in short: Given an integer value n, find out the n-th positive integer whose sum is 11.*/
#include <stdio.h>
int main(){
int n,sum,r,i,result,j;
printf("n=");
scanf("%d",&n);
for(i=28,j=0; ;i++){
result=i;
  for(sum=0; result>0; result=result/10){
    r=result%10;
    sum=sum+r;
    }
    if(sum==11){
    j++;
    if(j==n){
      printf("%d",i);
      break;
    }
      }
  }
}