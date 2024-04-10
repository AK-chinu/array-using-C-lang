#include<stdio.h>
int main()
{
    int arr[5]={32,52,50,26,85};
    for(int i=0; i<5; i++)
    {
        if (arr[i]<35)
        {
            printf("%d ",i);
        }
        
    }
}