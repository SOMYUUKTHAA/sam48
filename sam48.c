#include<stdio.h>
void main()
{
    int a[100],i=0,n,sum=0;
    float avg=0;
    printf("\nenter limit\n");
    scanf("\t%d",&n);
    for(i;i<n;i++)
    {
        printf("\nenter value %d:",i+1);
        scanf("\t%d",&a[i]);
    }
     if(i%2==0)
    {
    i/=2;
    }
    else
    {
    i/=2;
    }
    printf("\naverage number is:\t%d",a[i]);
}

