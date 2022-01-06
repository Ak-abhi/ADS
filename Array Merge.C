#include<stdio.h>

int main()
{
    int a[20],b[20],c[40],i,j,k,d,e;
    printf("Enter the size of array1:");
    scanf("%d",&d);
    printf("Enter the size of array2:");
    scanf("%d",&e);

    printf("Enter the elements of array1:\n");
    for(i=0;i<d;i++)
        {
        scanf("%d",&a[i]);
        }
    printf("Enter the elements of array2:\n");
    for(j=0;j<e;j++)
        {
        scanf("%d",&b[j]);
        }
    i=0;
    j=0;
    k=0;
    while(i<d && j<e)
    {

        if(a[i]<=b[j])
            {
            c[k]=a[i];
            i++;
            }
        else if(a[i]>=b[j])
        {
            c[k]=b[j];
            j++;
        }
        k++;
    }
    if(i>=d)
        {
        while(j<e)
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    if(j>=e){
        while(i<d)
        {
            c[k]=a[i];
            i++;
            k++;
        }
    }
    printf("array3 is:");
    for(k=0;k<d+e;k++)
    {
        printf("%d\t",c[k]);
    }
    return 0;
}
