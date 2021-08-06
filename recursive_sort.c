/**
 * Program to Do Selection Sort using recursion
 *
 * Compilation : gcc -o recursive_sort.c
 * Execution : ./recursive_sort
 *
 * Anupam Gupta and 1910990303  06/08/21
 * Assignment -> Assignment_5
 */
#include <stdio.h>

int min_index(int a[], int index, int n1)
{
    if(index == n1)
    {
        return index;
    }
    int min = min_index(a, index+1, n1);
    if(a[index] < a[min])
    {
        return index;
    }
    else
    {
        return min;
    }

}

void selection_sort(int a[], int c_index, int n)
{
    //For getting the index having the least value in the array
    int min = min_index(a, c_index, n-1);

    //Swapping the value of min value to the current index
    if(a[min] != a[c_index])
    {
        int temp = a[min];
        a[min] = a[c_index];
        a[c_index] = temp;
    }
    
    //Recursively calling the function
    if(c_index != n-1)
    {
        selection_sort(a, c_index+1, n);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int a[n];

    //Putting values in the array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    //Calling function for Sorting
    selection_sort(a , 0, n);

    //Printing the Sorted Array
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
