/*
WAP to demonstrate one dimensional array using the concept dynamic memory allocation.
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int i,n;
    printf("Enter number of elements in array:\n");
    scanf("%d",&n);
    ptr = ( int * )malloc( n*sizeof(int) );
    if( ptr == NULL )
    {
        printf("Pointer is not allocated!");
        exit(1);
    }
    printf("Enter array elements:\n");
    for( i=0; i<n; i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("Displaying the array elements:\n");
    {
        for( i=0; i<n; i++)
        {
            printf("%d\t",*(ptr+i));
        }
    }
    free(ptr);
    return 0;
}