/*There is a biker going on a road trip. The road trip consists of n + 1 points at different altitudes. The biker starts his trip on point 0 with altitude equal 0.
You are given an integer array gain of length n where gain[i] is the net gain in altitude between points i and i + 1 for all (0 <= i < n). Return the highest altitude of a point.
7
-4 -3 -2 -1 4 3 2
Sample Output :0
Explanation
The altitudes are [0,-4,-7,-9,-10,-6,-3,-1].
The highest is 0.*/
#include<stdio.h>
int main(){
    int n,a[100],i,b[100],max,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    max=b[0]=0;
    b[1]=a[0];
    for(j=2;j<=n;j++){
            for(i=1;i<j;i++){
            b[j]=b[j-1]+a[i];
        }
        if(max<b[j])
        max=b[j];
        else if(max<b[1])
        max=b[1];
    }
    if(max<0)
        printf("0");
    else
    printf("%d",max);
    
}