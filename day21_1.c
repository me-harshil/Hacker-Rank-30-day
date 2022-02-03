/*Note: Except for multiples of 3 use “Fizz” instead of the integer and for the multiples of 5 use “Buzz”. For integers which are multiples of both 3 and 5 use “FizzBuzz”.

For e.g.: n = 15 Then output will be: ["1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz", "11", "Fizz", "13", "14", "FizzBuzz"]*/
#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(i%3==0 && i%5==0)
        printf("FizzBuzz ");
        else if(i%3==0)
        printf("Fizz ");
        else if(i%5==0)
        printf("Buzz ");
        else
        printf("%d ",i);
    }
}