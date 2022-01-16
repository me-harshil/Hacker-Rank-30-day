/*Given a list of integers nums, return whether there's an integer whose frequency in the list is same as its value.
first take the number of integers and then take the numbers seperated by space.*/
#include <stdio.h>
int main() {
    int n,a[1000],i,count,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<n;i++){
        count=0;
        for(j=i;j<n;j++){
            if(a[i]==a[j])
                count++;
        }
        if(count==a[i]){
            printf("true");
            break;
        }
    }  
    if(count!=a[i])
        printf("false");
}