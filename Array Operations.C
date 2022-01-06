#include<stdio.h>

#include<stdlib.h>

int a[10], pos, elem;

int n = 0;

void display();

void insert();

void del();

void sort();

void search();

main()

{

int choice,i,j;

printf("Enter the no. of elements:");
scanf("%d",&n);
printf("\nEnter the elements of array:\n");
for(i=0;i<n;i++)
        scanf("%d",&a[i]);

            while(1)

            {

             printf("\nMENU\n");

             printf("\n 1. Display array elements");

             printf("\n 2. Insert ELEM at a given POS");

             printf("\n 3. Delete an element at a given POS");

             printf("\n 4. Sort ");

             printf("\n 5. Search");

             printf("\n 6. Exit");

             printf("\nEnter your choice: ");

             scanf("%d", &choice);

           switch(choice)

           {


            case 1: display();

                  break;

           case 2: insert();

                  break;

           case 3:del();

                  break;

           case 4:sort();

                  break;

           case 5:search();

                  break;




           case 6:exit(1);

                  break;

        default:printf("\nPlease enter a valid choice:");

                        }

            }

}

void display()

{

            int i;

            if(n == 0)

            {

                        printf("\nNo elements to display");

                        return;

            }

            printf("\nArray elements are: ");

            for(i=0; i<n;i++)

                        printf("%d\t ", a[i]);

}
void insert()

{

            int i;

            if(n == 5)

            {

        printf("\nArray is full. Insertion is not possible");

                        return;

            }

            do

            {

printf("\nEnter a valid position where element to be inserted:    ");

scanf("%d", &pos);

            }while(pos > n);

            printf("\nEnter the value to be inserted:   ");

            scanf("%d", &elem);

            for(i=n-1; i>=pos ; i--)

            {

                        a[i+1] = a[i];

            }

            a[pos] = elem;

            n = n+1;

            display();

}

void del()

{

            int i;



            if(n == 0)

            {

                        printf("\nArray is empty and no elements to delete");

                        return;

            }

            do

            {

                        printf("\nEnter a valid position from where element to be deleted:    ");

                        scanf("%d", &pos);

            }while(pos>=n);

            elem = a[pos];

            printf("\nDeleted element is : %d \n", elem);

            for( i = pos; i< n-1; i++)

            {

                        a[i] = a[i+1];

            }

            n = n-1;

            display();

}

void sort()
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
display();
}

void search()
{
    int key,i,f=0;
    printf("Enter the element to be searched\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            f=1;
            break;
        }

    }
    if(f==1)
    {
        printf("\nThe element %d is present at the position %d\n",key,i+1);
    }
    else
    {
        printf("\nSearch Unsuccessfull\n");
    }

}
