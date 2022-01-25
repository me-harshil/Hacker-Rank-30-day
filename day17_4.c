/*Let's call an array arr a mountain if the following properties hold: arr.length >= 3 There exists some i with 0 < i < arr.length - 1 such that: arr[0] < arr[1] < ... arr[i-1] < arr[i].arr[i] > arr[i+1] > ... > arr[arr.length - 1] Given an integer array arr that is guaranteed to be a mountain, return any i such that arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

Example 1: Input: arr = [0,1,0] Output: 1

Example 2: Input: arr = [0,2,1,0] Output: 1*/

/* <<------Method 1 ---------->>
#include <stdio.h>
int main()
{
    int n, a[100], i, j, k, max, flag = 0, min;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 1; i < n - 1; i++)
    {
        max = 0;
        for (j = 0; j < i; j++)
        {
            if (max <= a[j] && a[j] < a[i])
            {
                max = a[j];
                flag = 0;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        min = a[i];
        for (k = i + 1; k < n; k++)
        {
            if (a[i] > a[k] && min > a[k])
            {
                min = a[k];
                flag = 0;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d", i);
            break;
        }
    }
}
----------------------------------------------------------------------------------*/


//2nd Method
#include<stdio.h>
int main(){
    int n,a[100],i,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=0;i<n;i++){
        if(max<a[i])
        max=a[i];
    }
    for(i=0;i<n;i++){
        if(max==a[i]){
            printf("%d",i);
            break;
        }
    }
}
