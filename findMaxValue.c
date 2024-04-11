#include<stdio.h>
void main()
{
    int arr[5]={1,2,8,4,5};
    int max=arr[0];
    for(int i=1; i<5; i++)
    {
        if(max < arr[i])
        {
            max=arr[i];
        }
    }
    printf("%d",max);
}