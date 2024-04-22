#include<stdio.h>
void main(){
    int arr[6]={12,4,6,8,8,10};
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d is a duplicate element",arr[i]);
                break;
            }
        }
    }
}