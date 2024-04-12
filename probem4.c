// Find the difference between the sum of elements at even indices to the sum of elements at odd indices .
#include<stdio.h>
void main()
{
    int arr[5]={12,21,31,25,20};
    int evensum=0;
    int oddsum=0;
    for(int i=0;i<5;i++)
    {
        if(i%2==0)
        {
            evensum=evensum+arr[i];
        }
        else{
            oddsum=oddsum+arr[i];
        }
    }
    int difference=evensum-oddsum;
    printf("%d",difference);
}