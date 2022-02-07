/*You are given a list of integers tasks and another list of integers people. The integer tasks[i] represents the amount of strength required to perform the ith task. people[i] represents the amount of strength the ith person has.

Return the number of tasks that can be finished if one person can perform at most one task.
Sample Input 0
4
4
3 2 9 13
10 5 2 1
Sample Output 0

3
Explanation 0

First person can perform task 9
Second person can perform task 3
Third person can perform task 2
Fourth person can't perform any tasks*/
#include<stdio.h>
int main(){
    int n1,n2,task[10000],people[10000],i,j,temp,count=0;
    scanf("%d%d",&n1,&n2);
    for(i=0;i<n1;i++)
    scanf("%d",&task[i]);
    for(i=0;i<n2;i++)
    scanf("%d",&people[i]);

    for(i=0;i<n1-1;i++){
        for(j=i+1;j<n1;j++){
            if(task[i]<task[j]){
                temp=task[i];
                task[i]=task[j];
                task[j]=temp;
            }
        }
    }
    for(i=0;i<n2-1;i++){
        for(j=i+1;j<n2;j++){
            if(people[i]<people[j]){
                temp=people[i];
                people[i]=people[j];
                people[j]=temp;
            }
        }
    }
    j=0;
    for(i=0;i<n2 && i<n1;i++){
        for(;j<n1;){
            if(task[j]<=people[i]){
                count++;
                j++;
                break;
            }
            j++;
        }
    }
    printf("%d",count);
}