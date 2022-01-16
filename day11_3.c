/* There are n trains that are labeled from 1 to n.

You are given an array of train bookings as bookings, where bookings[i] = [first, last, seats] represents a booking for trains from first through last (inclusive) with no of seats seats reserved for each train in the range.

Return an array answer of length n, where answer[i] is the total number of seats reserved for train i.

Input Format

length of bookings = 3,

bookings = [[1,2,10],[2,3,20],[2,5,25]],

no of trains = 5

Constraints

1 <= n <= 2 * 104
1 <= bookings.length <= 2 * 104
bookings[i].length == 3
1 <= firsti <= lasti <= n
1 <= seatsi <= 104
Output Format

10 55 45 25 25

Sample input:
3
1(1,1),  2(1,2),  10(1,3), 
2(2,1),  3(2,2),  20(2,3), 
2(3,1),  5(3,2),  25(3,3), 
5
*/
#include<stdio.h>
int main(){
    int bookingLen,bookings[500][500],i,j,k,trains,ans[100];

    printf("Enter booking length\n");
    scanf("%d",&bookingLen);//Get booking length

    printf("Enter bookings\n");
    for(i=1;i<=bookingLen;i++){
        for(j=1;j<=3;j++)
        scanf("%d",&bookings[i][j]);//bookings[i] = [first, last, seats]
    }

    printf("Enter no of trains\n");
    scanf("%d",&trains);//no of trains

    // for(i=0;i<bookingLen;i++){
    //     for(j=0;j<3;j++)
    //     printf("%d ",bookings[i][j]);

    // printf("\n");
    // }
for(k=1;k<=trains;k++){
    ans[k]=0;
    // for(j=1;j<=2;j++){
        for(i=1;i<=bookingLen;i++){
            if(bookings[i][1]<=k && bookings[i][2]>=k)
            ans[k]+=bookings[i][3];
        }
    // }
    printf("%d ",ans[k]);
}
}