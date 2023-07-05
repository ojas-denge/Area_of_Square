//Write a program to find area of a square when side is given.//
#include <stdio.h>
int main () {
    int n1;
    
    printf("Enter SIDE of the SQUARE:\n");
    scanf("%d", &n1);
    
    printf ("The AREA of SQUARE with SIDE %d is :%d", n1, n1*n1);
    return 0;
}