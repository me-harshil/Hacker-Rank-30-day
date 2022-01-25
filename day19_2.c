/*Given a string s of words delimited by spaces, reverse the order of words.
Input Format
sentence = "hello there my friend"
Output Format
friend my there hello*/
#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    int i,j,startIndex,endIndex,len;
    gets(s);
    len=strlen(s);
    endIndex=len-1;
    for(i=len-1;i>=0;i--){
        if(s[i]==' ' || i==0){
            if(i==0)
            startIndex=0;
            else
            startIndex=i+1;
            for(j=startIndex;j<=endIndex;j++)
            printf("%c",s[j]);
            endIndex=i-1;
            printf(" ");
        }
    }
}