/**
 * Program to find GCD of two numbers using recursion
 *
 * Compilation : gcc -o gcd gcd.c
 * Execution : ./gcd
 *
 * Anupam Gupta and 1910990303  06/08/21
 * Assignment -> Assignment_5
 */
#include <stdio.h>

//To find gcd
int gcd(int i,int j)
{
    if(i==0)
    {
        return j;
    }
    gcd(j%i ,i); //Recursion till j%i becomes zero
}

int main()
{
    int i ,j;
    scanf("%d", &i);
    scanf("%d", &j);

    //Goes to function gcd
    printf("gcd of %d and %d is %d\n", i, j, gcd(i,j));
    return 0;
}
