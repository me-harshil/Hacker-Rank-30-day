/*Take 'n' as the first line of input ('n' is total number of digits). Then input the number with 'n' digits in new line. Find the sum of digits and product of digits and then the difference of them.*/
#include<stdio.h>
int main(){
    int n,r1,r2,sum,mul,diff,num,mulNum;
    // printf("Enter a number of digit first then enter a number\n");
    scanf("%d %d",&n,&num);
    mulNum=num;
    for(sum=0;num>0;num/=10){
        r1=num%10;
        sum=sum+r1;
    }
    for(mul=1;mulNum>0;mulNum/=10){
        r2=mulNum%10;
        mul=mul*r2;
    }
    diff=mul-sum;
    printf("%d\n",diff);
}