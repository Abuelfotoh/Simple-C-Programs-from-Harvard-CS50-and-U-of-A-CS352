/**
 * helpers.c
 * Arthur Miller
 * Computer Science 50
 * Problem Set 3
 *
 * Helper search and sort functions for Problem Set 3.
 */
       
#include <cs50.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    for(int i = 0; i <= n; i++) 
    {
	    if(values[i] == value) 
	    {
			return true;
		}   
    }
    return false;
}    

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    /**
     * This is my shot at performing an insersion sort
     * although it is the same speed 
     * it seemed like I could do it with less lines of code.
     */
    int i, j, placeHolder;
    for (i = 1; i < n; i++) 
    {
        placeHolder = values[i];    
        for (j = i; j > 0 && placeHolder < values[j - 1]; j--) 
        {
            values[j] = values[j - 1];
        }
    values[j] = placeHolder;
    }
    return;
}
