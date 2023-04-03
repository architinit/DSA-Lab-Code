#include<stdio.h>
void main() {
    int arr[100];
    int pos,n,i;
    printf("enter the number of element:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    printf("\nenter the position of element you want to delete:");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
        arr[i]=arr[i+1];
    arr[n-1]=0;
    n--;
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
}