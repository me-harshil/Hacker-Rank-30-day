/*You are given a 2D integer array logs where each logs[i] = [birthi, deathi] indicates the birth and death years of the ith person.

The population of some year x is the number of people alive during that year. The ith person is counted in year x's population if x is in the inclusive range [birthi, deathi - 1]. Note that the person is not counted in the year that they die.

Return the earliest year with the maximum population.*/
#include<stdio.h>
int main(){
    int logs[100][2],i,j,logsSize,m,n;
    scanf("%d",&logsSize);
    for(i=0;i<logsSize;i++){
        for(j=0;j<2;j++)
        scanf("%d",&logs[i][j]);
    }
    j=0;
    int pop[101] = {0},maxPop = 0,maxYear = 0;
    for(i = 0;i < logsSize;i++){
        m = logs[i][0] - 1950;
        n = logs[i][1] - 1950;
        for(j = m;j < n;j++){
            pop[j]++;
        }
    }
    for(i = 0;i < 101;i++){
        if(pop[i] > maxPop){
            maxPop = pop[i];
            maxYear = i+1950;
        }
    }
    printf("%d",maxYear);
}