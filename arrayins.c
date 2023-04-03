//insertion of element in an array
#include<stdio.h>
void main(){
    int arr[100];
    int pos,x,i,n;
    n=10;
    printf("enter the elements of array\n");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    printf("elements\n");
    for(i=0;i<10;i++)
        printf("%d ",arr[i]);
        printf("\n");
    printf("enter the element to insert");
    scanf("%d",&x);
    printf("/n");
    printf("enter the position where the element you wanted to insert");
    scanf("%d",&pos);
    n++;
    for(i=n-1;i>=pos;i--)
        arr[i]=arr[i-1];
    arr[pos-1]=x;
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    }


