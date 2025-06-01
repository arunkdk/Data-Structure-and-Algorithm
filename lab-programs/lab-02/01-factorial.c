/*
WAP to find factorial of given number using recursion.
*/

#include<stdio.h>
long int fact(int n);
int main() {
    int num;
    long int result;
    printf("Enter any number:\n");
    scanf("%d",&num);
    result = fact(num);
    printf("The factorial of %d is %ld.", num, result);
    return 0;
}
long int fact( int n ) {
    if( n ==0 || n==1 ) {
        return 1;
    }
    else {
        return (n*fact(n-1));
    }
}