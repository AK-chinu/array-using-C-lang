#include<stdio.h>
int fun(int arr[])
{
    for(int i=0; i<6; i++)
    {
        if(i%2!=0)
        {
            arr[i]=arr[i]+10;
        }
        else
        {
            arr[i]=2*arr[i];
        }
    }
}
int printarray(int arr[])
{
    for (int i = 0; i < 6; i++)
    {
        printf("%d ",arr[i]);
    }
}
void main()
{
    int arr[6]={1,2,3,4,5,6};
    printf("Original array :\n");
    printarray(arr);
    fun(arr);
    printf("\n After the modification :\n");
    printarray(arr);

    
}