/*Given an integer n, return the maximum number you can make by inserting 5 anywhere in the number.
For e.g.:
If n = 923, 
Then ouput will be 9523 as it will be the maximum number when 5 is added into the given 3 digits*/
#include<stdio.h>
#include<math.h>
int main(){
    int n,a[10],i,count=0,flag=0,p=-5,j=-5,b[10],count2=0;
    scanf("%d",&n);
    if(n==0)
    printf("5%d",n);
    if(n<0){
    printf("-");
    p=abs(n);
    }
    for(i=0;n>0;n/=10,i++){
        a[i]=n%10;
        count++;
    }
    for(i=count-1;i>=0;i--){
        if(a[i]<5 && flag==0){
            printf("5");
            flag=1;
        }
        printf("%d",a[i]);
    }

    for(j=0;p>0;p=p/10,j++){
        a[j]=p%10;
        count2++;
    }
    for(j=0;j<count2;j++){
        if(a[j]<5){
            if(flag==0)
            b[j]=5;
            flag=1;
            b[j+1]=a[j];
        }
        else
        b[j]=a[j];
    }
    if(count2!=0){
    for(j=count2;j>=0;j--)
    printf("%d",b[j]);
    }
}