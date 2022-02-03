/*Given a sequence of words, check whether it forms a valid word square.

A sequence of words forms a valid word square if the kth row and column read the exact same string, where 0 ≤k< max(numRows, numColumns).
Sample Input 0

4
abcd
bnrt
crmy
dtye
Sample Output 0

true
Explanation 0

The first row and first column both read "abcd".
The second row and second column both read "bnrt".
The third row and third column both read "crmy".
The fourth row and fourth column both read "dtye".
Therefore, it is a valid word square.*/
#include<stdio.h>
#include<string.h>
int main(){
    int i,n,j,flag=0;
    scanf("%d",&n);
    char *s[n];
    for(i=0;i<n;i++)
    scanf("%ms",&s[i]);

    for(i=0;i<n;i++){
    for(j=0;j<strlen(s[i]) && s[i][j]!='\0';j++){
        if(s[i][j]==s[j][i])
        continue;
        else
        flag=1;
    }
    }
    if(flag==0)
    printf("true");
    else
    printf("false");
}