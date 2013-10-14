/**
 * generate.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Generates pseudorandom numbers in [0,LIMIT), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 */
       
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIMIT 65536

int main(int argc, string argv[])
{
    // TODO: If there is not at least two arguments and if there is more than 3
          // arguments, print this message and return 1 (ending program).
    if (argc != 2 && argc != 3)
    {
        printf("Usage: ./generate n [s]\n");
        return 1;
    }

    // TODO: The second position of array argv (position 1) is converted to an integer
          // and its value is stored in the integer variable n.
    int n = atoi(argv[1]);

    // TODO: If there are three arguments in array argv (0, 1, and 2) 
          // the value in position 2 (the third position) will be used as a seed (srand),
          // else srand is NULL.
    if (argc == 3)
    {
        srand((unsigned int) atoi(argv[2]));
    }
    else
    {
        srand((unsigned int) time(NULL));
    }

    // TODO: For loop incrementing i while i is less than n to print a random integer 
          // modulus 65536 (value of defined constant LIMIT) and go to new line. 
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", rand() % LIMIT);
    }

    // that's all folks
    return 0;
}
