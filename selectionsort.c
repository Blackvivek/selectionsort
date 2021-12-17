#include<stdio.h>
int main()
{
    int a[100],i,j,n,min,temp;
    printf("\nenter the size of array:");
    scanf("%d",&n);
    printf("\nenter the element of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=0;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
            
            temp=a[j];
            a[j]=a[min];
            a[min]=temp;
        }
      
    }
    printf("selection sorting");
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
}
return 0;
}