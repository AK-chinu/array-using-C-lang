// count the number of elements in given array greater then a given number !
#include<stdio.h>
void main()
{
    int arr[5]={2,5,110,42,6};
    int count=0;
    int x=10;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>x)
        {
            count=count+1;
        }
    }
    printf("%d",count);
}