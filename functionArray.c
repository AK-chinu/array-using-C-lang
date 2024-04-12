#include<stdio.h>
void fun(int a[])
{
    for(int i=0;i<5;i++)
    {
        a[2]=100;
        printf("\n%d",a[i]);
    }
}
void main()
{
    printf("array 1");
    int arr[5]={1,5,6,1,2};
    int arr1[5]={12,25,52,32,52};
    fun(arr1);
    printf("\narray 2");
    fun(arr);
}
// passing array to function --> pass by reference