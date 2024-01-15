// malloc()

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i, *ptr ;
    printf("enter the no of value");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    if (ptr == NULL)
    {
        printf("memory not allocated");

    }
    else
    { 
        printf("enter the values");
        for (i=0;i<n;i++)
        {
            scanf("%d",(ptr+i));
        }
        printf("entered values are:");
        for (i=0;i<n;i++)
        {
            printf("%d \n",*(ptr+i));
        }
    }
    free(ptr);

}*/



// calloc()
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i, *ptr ;
    printf("enter the no of value");
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));
    if (ptr == NULL)
    {
        printf("memory not allocated");

    }
    else
    { 
        printf("enter the values");
        for (i=0;i<n;i++)
        {
            scanf("%d",(ptr+i));
        }
        printf("entered values are:");
        for (i=0;i<n;i++)
        {
            printf("%d \n",*(ptr+i));
        }
    }
    free(ptr);

}*/


//realloc()

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1,n2,i, *ptr ,*ptr1;
    printf("enter the no of value");
    scanf("%d",&n1);
    ptr = (int*)malloc(n1*sizeof(int));
    if (ptr == NULL)
    {
        printf("memory not allocated");

    }
    else
    { 
        printf("enter the values");
        for (i=0;i<n1;i++)
        {
            scanf("%d",(ptr+i));
        }

        printf("enter the updated size of n");
        scanf("%d",&n2);

        int *ptr1 = (int*)realloc(ptr,n2*sizeof(int));
        printf("\n previous address:%d,new address :%d",ptr,ptr1);
        printf("enter new values:");
        if(n2>n1)
        {
            for (i=n1;i<n2;i++)
            {
            scanf("%d",(ptr1+i));
            }

        }
        printf("entered values are:");
        for (i=0;i<n2;i++)
        {
            printf("%d \t",*(ptr1+i));
        }
    }
    free(ptr1);
}*/




// free() // not completed

/*#include<stdio.h>
#include<stdlib.h>
int *intake()
{
    int i,n, *ptr ;
    
    
    ptr = (int*)calloc(n,sizeof(int));
    if (ptr == NULL)
    {
        printf("memory not allocated");

    }
    else
    { 
        printf("enter the values");
        for (i=0;i<n;i++)
        {
            scanf("%d",(ptr+i));
        }
    }
    return ptr;
    
}

int main()
{
    int *ptr1;
    printf("enter the no of value");
    scanf("%d",&n1);
    ptr1= intake(n1);
    free(ptr);
    for (int i=0;i<n1;i++)
    {
        scanf("%d",(ptr1+i));
    }
    free(ptr1);

}*/
