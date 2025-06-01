/*
WAP to take and display the elements in two dimensional array using concept of dynamic memory allocation.
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int m,n;
    printf("Enter the order of matrix:\n");
    scanf("%d%d",&m,&n);
    ptr = ( int * )malloc((m*n)*sizeof( int ));
    printf("Enter %d elements:\n",m*n);
    for( int i=0; i<m; i++ )
    {
        for( int j=0; j<n; j++ )
        {
            scanf("%d", (ptr + i * n + j));  // *(ptr + i * n + j) or  ptr[i * n + j] is the value at address
        }
    }
    printf("Entered elemnents are:\n");
    {
        for( int i=0; i<m; i++)
        {
            for( int j=0; j<n; j++)
            {
                printf("%d\t", *( ptr + i * n + j));
            }
            printf("\n");
        }
    }
    free(ptr);
    return 0;
}