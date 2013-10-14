/**
 * Mario
 *
 * Arthur Miller
 * ArthurMiller@g.harvard.edu
 * Note: computer science is awesome!
 * Takes input for height and scales pyramid size and space according to value of height.
 */

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    int height;
    do 
    {
        printf("please enter desired height:"); // Prompts user for input, assign to height.
        height = GetInt();
    } 
    while (height < 0 || height > 23); 
 	    for(int a = 0; a < height; a++)
        {
            for(int b = 0; b < height-a-1; b++) //Left side pyramid.
            {
                printf(" ");
            }     
            for(int c = 0; c < a+1; c++)
            {
                printf("#");
            }
            printf("  "); // Hardcode space between pyramids.
            for(int c = 0; c < a+1; c++) //Right side pyramid.
            {
                printf("#");
            }
            printf("\n");
 	    } //close for loop.
        return 0;
    } //Close main.



