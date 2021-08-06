/**
 * Program to every 3rd element in Fibonacci series n times
 *
 * Compilation : gcc -o fibonacci.c
 * Execution : ./fibonacci
 *
 * Anupam Gupta and 1910990303  07/08/21
 * Assignment -> Assignment_5
 */
#include <stdio.h>

int i = 0;
int j = 1;
int k;
int c=1;

//Finding value in fibonacci series
int fibo()
{
    k=i+j;
    i=j;
    j=k;
    c++;
    if(c%3 == 0)
    {
        return k;
    }
    else
    {
        fibo();
    }
}

void fib(int n) 
{
    int a;

    //Base Case
    if(n==0)
    {
        return 0;
    }

    //Calling the fibo function for fibonacci series
    a = fibo();

    if(n>0)
    {
        printf("%d", a);
        if(n>1)
        {
            printf(",");
        }
    }

    //Recursively calling the function 
    fib(n-1);    
}

int main() 
{
    int n;
    scanf("%d", &n);

    //Calling function to get every 3rd fibonacci numbers n times
    fib(n);
    return 0;
}
