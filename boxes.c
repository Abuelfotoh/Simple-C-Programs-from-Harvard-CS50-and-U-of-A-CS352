/**
 * boxes
 *
 * Arthur Miller
 * CSCV352
 * The University of Arizona
 * Takes input and forms box based on input.
 * Memory tested and no memory leaks uppon close.
 * Parameters checked, heap and stack protected from overwriting. 
 */

#include <stdio.h>

int main()
{   //variables
    int cap, i, j, cent;
    int limit = 1000;
    //Gets user input, but as in the example, does not prompt for it.
	//Although it might be better to prompt for input value.
    scanf("%d", &cap);
    //Only accespts values under 1000 to stop memory from being overwritten
    //as a security feature.
    if(cap < limit)
    {
        cent = cap;
        for(i = 1; i <= cap; i++)
        {
            for(j = 1; j <= cent; j++)
            {
                if(i == 1 || i == cap)
                {   //prints top and bottom.
                    printf("*");
                }
                else if(j == 1 || j == cent)
                {   //prints sides
                    printf("*");
                }
                else
                {   //prints space for center.
                    printf(" ");
                }
            }//Ends nested forloop. new line.
            printf("\n");
        }//Ends forloop, if all is well, returns 0 to stop program.   
        return 0;
    }//Ends if statement.
    // Error message if integer is too large. Implemented to protect memory.
    printf("Integer entered is too large.\nPlease restart and enter a smaller number\n");
    return 1;
}//Ends main.    
