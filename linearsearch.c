#include<stdio.h>
void main () {
    int arr[100];
    int n,i,num;
    printf("enter the number of element:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    printf("\nenter the element you want to find:");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(num==arr[i])
            break;
            }
    if(i<n)
    printf("%dfound at index%d",num,i);
    else
    printf("element not found");
    }
