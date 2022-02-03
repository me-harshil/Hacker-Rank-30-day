/*Given two strings s0 and s1, return whether they are phoenix strings of each other.

Phoenix strings are a word, phrase, or name formed by rearranging the letters of another,

eg. such as spar, formed from rasp.
Input Format
s0 = "listen"
s1 = "silent"
Output Format
true*/
#include<stdio.h>
#include<string.h>
int main(){
    int i,j,flag,count=0,len;
    char s0[1000],s1[1000];
    gets(s0);
    gets(s1);
    len=strlen(s0);
    for(i=0;i<len;i++){
        flag=0;
        for(j=0;j<len;j++){
            if(s0[i]==s1[j]){
                flag=1;
                break;
            }
        }
        if(flag==1)
        count++;
    }
    if(count==len)
    printf("true");
    else
    printf("false");
}
