/*Given a characters array letters that is sorted in non-decreasing order and a character target, return the smallest character in the array that is larger than target. Note that the letters wrap around. For example, if target == 'z' and letters == ['a', 'b'], the answer is 'a'.

Example 1:
Input: letters = ["c","f","j"], target = "a"
Output: "c"

Example 2:
Input: letters = ["c","f","j"], target = "c"
Output: "f"

Example 3:
Input: letters = ["c","f","j"], target = "d"
Output: "f"*/
#include<stdio.h>
#include<string.h>
int main(){
    int n,i,c,flag=0;
    char t,a[100];
    scanf("%c%d",&t,&n);
    for(i=0;i<n;i++)
    scanf("%c",&a[i]);
    for(i=0;i<n;i++){
    c=t-a[i];
    if(c<0){
        printf("%c",a[i]);
        flag=1;
        break;
    }
    }
    if(flag==0)
    printf("%c",a[1]);
}