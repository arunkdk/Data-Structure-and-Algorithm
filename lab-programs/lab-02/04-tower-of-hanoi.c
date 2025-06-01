/*
WAP for implementation of Tower of Hanoi.
*/

#include<stdio.h>
void toh(int n, char s, char a, char d);
int main() {
    int n;
    printf("Enter the number of disks:\n");
    scanf("%d", &n);
    printf("The sequence of moves:\n");
    toh( n, 'A', 'B', 'C');     // A=source B=auxiliary C=destination
    return 0;
}
void toh( int n, char s, char a, char d )
{
    if( n == 1) {
        printf("Move disk 1 from %c to %c\n", s, d );
    }
    else {
        //Move n-1 disk from source to  auxiliary
        toh( n-1, s, d, a );
        printf("Move disk %d from %c to %c\n", n, s, d);
        // Move n-1 disk from auxiliary to destination
        toh( n-1, a, s, d );
    }
}