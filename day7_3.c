/*A phoenix sentence is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.

Input Format

string = "thequickbrownfoxjumpsoverthelazydog"

Constraints

1 <= sentence.length <= 1000

sentence consists of lowercase English letters.

Output Format

true

Sample Input 0

thequickbrownfoxjumpsoverthelazydog
Sample Output 0

true
Sample Input 1

phoenixclub
Sample Output 1

false
*/
#include<stdio.h>
#include<string.h>
int main(){
    int count=0;
    char a[1000],i;
    gets(a);
    // printf("%d%d",'a','z');
    for(i=97;i<=122;i++){
        if(strchr(a,i)==NULL)
        printf("");
        else
        count++;
    }
    if(count>=26)
    printf("true");
    else
    printf("false");
}