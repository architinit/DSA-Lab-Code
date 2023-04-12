//Insertion at End.
#include<stdio.h>
void main() {
    int arr[100];
    int x,n,i;
    printf("enter the number of element:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    printf("\nenter the element you want to insert:");
    scanf("%d",&x);
    n++;
    for(i=n-1;i>=n-1;i--)
        arr[i]=arr[i-1];
    arr[n-1]=x;
    printf("\n*****UPDATED ARRAY*****\n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
}
