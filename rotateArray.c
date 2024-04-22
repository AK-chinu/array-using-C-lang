//Rotate the given array 'a' by k steps, where k is non negative .
//Note: K can be greater than n as well where n is the size of array 'a'
#include<stdio.h>
void Reverse(int a[],int x,int y){
    for(int i=x,j=y; i<j; i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    return ;
}
void main(){
    int arr[6]={10,20,30,40,50,60};
    int n=6;
    int k=3;
    k=k%n;
    Reverse(arr,0,n-1);
    Reverse(arr,0,k-1);
    Reverse(arr,k,n-1);
    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
}