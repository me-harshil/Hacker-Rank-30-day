/*Given a number N. The task is to find the sum of N Harmonic Number. Let the nth harmonic number be Hn. The harmonic series is as follows:
H1 = 1
H2 = H1 + 1/2
H3 = H2 + 1/3
H4 = H3 + 1/4
. . .
Hn = Hn-1 + 1/n*/
#include<stdio.h>
int main(){
    int n,i;
    float sum;
    scanf("%d",&n);
    for(sum=0,i=1;i<=n;i++){
        sum=sum+1/(float)i;
    }
    printf("%.4f",sum);
}