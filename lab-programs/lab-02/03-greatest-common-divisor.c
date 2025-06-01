/*
WAP to find Greates Comman Divisor of two given number.
*/

#include<stdio.h>
// GCD is the largest number which exactly divides both the numbers.
int gcd(int a, int b);
int main() {
    int m, n;
    printf("Enter any value to find their greatest common divisor:\n");
    scanf("%d %d", &m, &n);
    printf("The greatest common divisor of %d and %d is %d", m, n, gcd(m,n));
    return 0;
}
int gcd(int a, int b) {
    if( b == 0 ) {
        return a;
    }
    else {
        return ( b, a%b );
    }
}