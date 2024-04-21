// if an array arr contain n elements , then check if the given array is a palindrome or not !
#include<stdio.h>
int palindrome(int a[], int n)
{
    for(int i=0,j=n-1 ;i<j; i++,j--)
    {
        if(a[i]!=a[j]){
            return 0; // not a palindrome .
        }
    }
    return 1; // palindrome
}
int main()
{
    int n;
    printf("Enter array size :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the no %d element",i+1);
        scanf("%d",&arr[i]);
    }

    if (palindrome(arr,n))
    {
        printf("The array is a palindrome.\n");
    }
    else{
        printf("The array is not a palindrome");
    }
}