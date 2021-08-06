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

//Universal variable to calculate number of movements required to shift the tower
int count=0;

//function for shifting tower from 'from' to 'to'
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
    //Calling the function	
    tower_of_hanoi(3,'A','C','B');

    //printing the number of movements taken to move tower from 'from' to 'to'
    printf("Total movements required = %d", count);
    return 0;
}
