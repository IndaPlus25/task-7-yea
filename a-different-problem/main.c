/***
 * Template to a Kattis solution.
 * See: https://open.kattis.com/help/c
 * Author: Viola Söderlund <violaso@kth.se>
 */

#include <stdio.h> // standard input/output library

/// Kattis calls main function to run your solution
int main()
{
    long x;
    long y; 

    //While loop that runs until the input isn't 2 longs, where is breaks out of the loop
    // takes the difference of the two inputted longs and turns it positive if it's negative and prints it
    while(1) {
        if (scanf("%ld%ld", &x,&y) == 2)      // parse input as longs
        {
            long difference = x-y;

            if (difference < 0)
            {
                difference = -difference;
            }
            
            printf("%ld\n", difference);
        } else {
            break;
        }
    }
}