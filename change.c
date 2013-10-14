/**
 * change
 *
 * Arthur Miller
 * CSCV352
 * The University of Arizona
 * Takes in a letter as char input and prints that letter
 * along with the next nine letters (10 letters) in lowercase and capitals.
 * Memory tested and no memory leaks uppon close.
 * Parameters checked, heap and stack protected from overwriting. 
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
//global variable defined.
#define MAX 10

int main()
{   //Variable declared and initialized.
	int i = 0;
	//Gets a character as user input and will only take first character entered.
    char lineIn = getchar();
	//accepts character values within ascii alphabet values (no special characters or punctuation).
    if(((int)lineIn > 64 && (int)lineIn < 91) || ((int)lineIn > 96 && (int)lineIn < 123))
	{	//forloop should stop after 10 characters or ascii character z = 122 				
        for(i = 0; (i < MAX) && ((int)lineIn < 123); i++)
		{   //Iterates printing char and next characters in lowercase.
			lineIn = tolower(lineIn);
            printf("%c", (int)lineIn + i);
		}	
	    printf("\n");
		//Converts character to uppercase.
		lineIn = toupper(lineIn);
		//forloop should stop after 10 characters or ascii character Z = 90.
		for(i = 0; (i < MAX) && ((int)lineIn < 91); i++)
		{   //Iterates printing uppercase characters.
            printf("%c", (int)lineIn + i);
		}	
		printf("\n");
    }
	else 
	{   //Prints error message if specs are not met.
	    printf("Please restart and enter a single upper or lower case letter");	
		return 1;
	}
	//Returns 0 if program runs and closes without issues.
    return 0;
}//Ends main.


    
