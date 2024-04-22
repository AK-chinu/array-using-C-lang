#include<stdio.h>
void ArrayPartReverse(int a[],int x,int y){
    for(int i=x,j=y; i<j; i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    return ;
}
int main(){
    int arr[6]={10,20,30,40,50,60};
    ArrayPartReverse(arr,2,5);
    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
}