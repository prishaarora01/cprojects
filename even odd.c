#include<stdio.h>
void main()
{
    int a[30],i,temp,n;
    printf("enter the number of elements ");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}