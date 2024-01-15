// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int a[50],size,i;
//     printf("enter size of array");
//     scanf("/d",&size);
//     printf("enter elements of array");
//     for (i=0;i<size ; i++)
//     {
//         scanf("/d",&a[i]);

//     }
//     printf("elements of array");
//     for (i=0;i<size ; i++)
//     {
//         printf("elemnt" ,i ,"=",a[i]);
//     }
// }

// array operations in java  
// 1 traversal : visiting each and every element of the array
// 2 insertion : adding elements to the array
// deletion : deteing element of array

// #include<stdio.h>
// #include<conio.h>
// int main ()
// {
//     int a[50],size,i,num,pos;
//     printf("enter the size of the array");
//     scanf("%d",&size);
//     printf("enter the elements of array");
//     for(i=0;i<size;i++)
//     {                                                         //inserting an element at desired position 
//         scanf("%d",&a[i]);

//     }
    
//     printf("enter the data u wnat to delete");
//     scanf("%d",&num);
//     printf("enter position");
//     scanf("%d",&pos);
//     if (pos<=0 || pos > size + 1)
//     {
//         printf("invalid position");

//     }
//     for (i = size-1;i>=pos-1;i--)
//     {
//         a[i+1] = a[i];

//     }
//     a[pos-1]= num;
//     size++;
    
//     for(i=0; i<size; i++)
//     {
//         printf( "%d",a[i]);

//     }

// }




#include<stdio.h>
#include<conio.h>
int main ()
{
    int a[50],size,i,num,pos;
    printf("enter the size of the array");
    scanf("%d",&size);
    printf("enter the elements of array");
    for(i=0;i<size;i++)
    {                                                         //inserting an element at desired position 
        scanf("%d",&a[i]);

    }
    
    
    printf("enter position");
    scanf("%d",&pos);
    if (pos<=0 || pos > size + 1)
    {
        printf("invalid position");

    }
    for (i = pos - 1;i<size-1;i++)
    {
        a[i] = a[i+1];

    }
    
    size--;
    
    for(i=0; i<size; i++)
    {
        printf( "%d",a[i]);

    }

}