/*Raam is superstitious. He will only use a number as a roll number if all digits of the number are different(i.e. no digits are repeated)

Return boolean string as output, print true if all digits are different and false if there are repetitions.*/
#include<stdio.h>
int main(){
    long int i,j,flag=0,n,a[12];
    scanf("%ld",&n);
    for(i=0;n>0;n/=10,i++){
        a[i]=n%10;
    }

    n=i;
    for(i=0;i<=n;i++){
        for(j=i+1;j<=n;j++){
        if(a[i]==a[j]){
                flag=1;
                break;
            }
        }
    }
    
    if(flag==1)
    printf("The number is unlucky.");
    else
    printf("The number is lucky.");

}