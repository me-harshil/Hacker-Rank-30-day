/*Raam is superstitious. He will only use a number as a roll number if all digits of the number are different(i.e. no digits are repeated)

Return boolean string as output, print true if all digits are different and false if there are repetitions.*/
#include<stdio.h>
int main(){
    int n,x[12],r,i,r2;
    printf("n=");
    scanf("%d",&n);
    for(i=0;n>0;i++,n=n/10){
        r=n%10;
        r2=(n/10)%10;
        x[i+1]=r2;
        x[i]=r;
        for(i=0;i<12; ){
            if(r2==x[i]){
                printf("false");
                break;
            }
        }

    }

}