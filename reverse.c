// reverse the array without using extra array !
#include<stdio.h>
void reverse(int a[])
{
    int i=0;
    int j=4;
    while (i<j)
    {
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    return ;
    
}
void main()
{
    int arr[5]={5,10,15,20,25};
    reverse(arr);
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
}