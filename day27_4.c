/*Given a clock time with hour and integer minutes, determine the smaller angle between the hour and the minute hands and floor it to the nearest integer.

Note that the hour hand moves too.

Bonus: When, during the course of a day, will the angle be zero?
Sample Input 0
12
22
Sample Output 0
121*/
#include<stdio.h>
#include<math.h>
int main(){
    int min,angle,hour;
    scanf("%d%d",&hour,&min);
    if(hour==12)
    hour=0;
    else if(hour>12)
    hour=hour-12;
    hour=(hour*60+min)*0.5;
    angle=(abs(hour-(min*6)));
   if((360-angle)<angle)
   angle=360-angle;
    printf("%d",angle);   
}
