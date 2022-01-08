/*Phoenix Numbers are the numbers whose sum of factorial of digits is equal to the original number. Given a number, check if it is a Phoenix Number or not. Print Yes or No
Sum of digit factorials = 1! + 4! + 5! = 145

Input Format

145

Constraints

0

Output Format

Yes

Sample Input 0

145
Sample Output 0

Yes
*/
#include<stdio.h>
int main(){
    int n,a[100],sum,fact,i,j,r,result;
    printf("n=");
    scanf("%d",&n);
    result=n;
    for(sum=0,i=0;n>0;i++,n/=10){
        r=a[i]=n%10;
        // printf("%d\n",r);
        for(fact=1,j=1;j<=r;j++){
            fact=fact*j;
        }
        sum=sum+fact;
    }
    
    // printf("%d\n",sum);
    if(sum==result)
    printf("Yes");
    else
    printf("No");
}