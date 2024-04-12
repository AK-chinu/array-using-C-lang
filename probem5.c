// Find the total number of pairs in the array whose sum is wqual to the given value x.
#include<stdio.h>
void main()
{
    int arr[5]={2,5,6,4,5};
    int x=10;
    int count=0;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if((arr[i]+arr[j])==x)
            {
                count=count+1;
            }
        }
    }
    printf("%d",count);

}