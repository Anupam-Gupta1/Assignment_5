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
    if(n==0)
    {
        return 0;
    }
    a = fibo();
    if(n>0)
    {
        printf("%d", a);
        if(n>1)
        {
            printf(",");
        }
    }
    fib(n-1);    
}

int main() 
{
    int n;
    scanf("%d", &n);
    fib(n);
    return 0;
}
