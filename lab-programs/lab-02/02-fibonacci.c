/*
WAP to print fibonacci series upto nth trems using recursion.
*/

#include<stdio.h>
int fibo( int n);
int main() {
    int num;
    printf("Enter number of terms in fibonacci series:\n");
    scanf("%d", &num);
    for( int i=0; i<num; i++)
    {
        printf("%d\t", fibo(i));
    }
    return 0;
}
int fibo( int n ) {
    if( n == 0 || n == 1 ) {
        return n;
    }
    else {
        return ( fibo(n-2) + fibo(n-1) );
    }
}