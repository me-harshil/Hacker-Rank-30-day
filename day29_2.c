/*You are given an array items, where each items[i] = [typei, colori, namei] describes the type, color, and name of the ith item. You are also given a rule represented by two strings, ruleKey and ruleValue.

The ith item is said to match the rule if one of the following is true:

ruleKey == "type" and ruleValue == typei.
ruleKey == "color" and ruleValue == colori.
ruleKey == "name" and ruleValue == namei.
For e.g.:

If input is 
length = 3
items = [["phone","blue","pixel"],["computer","silver","lenovo"],["phone","gold","iphone"]], 
ruleKey = "color", ruleValue = "silver"
then output will be 1.
Explanation:

There is only one item matching the given rule, which is ["computer","silver","lenovo"].

Hint: You can use arrayList to store the input elements.*/
#include<stdio.h>
#include<string.h>
int main(){
    char ruleKey[40],ruleValue[50];
    int len,total,i,count=0;
    fflush(stdin);
    gets(ruleKey);
    gets(ruleValue);
    scanf("%d",&len);
    total=len*3;
    char *s[total];
    for(i=0;i<total;i++)
    scanf("%ms",&s[i]);
    if(strcmp(ruleKey,"type")==0){
    for(i=0;i<total;i+=3){
        if(strcmp(ruleValue,s[i])==0)
            count++;
    }
    }
    else if(strcmp(ruleKey,"color")==0){
        for(i=1;i<total;i+=3){
        if(strcmp(ruleValue,s[i])==0)
            count++;
    }
    }
    else{
        for(i=2;i<total;i+=3){
        if(strcmp(ruleValue,s[i])==0)
            count++;
    }
    }
    printf("%d",count);
}