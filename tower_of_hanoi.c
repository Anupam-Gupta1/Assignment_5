/**
 * Program to find number of movments being done in tower of hanoi using recursion
 *
 * Compilation : gcc -o tower_of_hanoi.c
 * Execution : ./tower_of_hanoi
 *
 * Anupam Gupta and 1910990303  06/08/21
 * Assignment -> Assignment_5
 */
#include <stdio.h>

int count=0;

void tower_of_hanoi(int n, char from, char to, char aux)
{
    if(n==1)
    {
        count++;
        printf("%c to %c\n", from ,to);
        return 0;
    }
    tower_of_hanoi(n-1, from, aux, to);
    count++;
    printf("%c to %c\n", from ,to);
    tower_of_hanoi(n-1, aux, to, from);
}

int main() 
{
    tower_of_hanoi(3,'A','C','B');
    printf("Total movements required = %d", count);
    return 0;
}

