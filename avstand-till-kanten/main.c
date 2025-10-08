/***
 * Template to a Kattis solution.
 * See: https://open.kattis.com/help/c
 * Author: Viola Söderlund <violaso@kth.se>
 */

#include <stdio.h> // standard input/output library

/// Kattis calls main function to run your solution
int main()
{
    int x; // the height of the square
    int y; // the width of the square
    
    scanf("%d%d", &x, &y);                // parse input as integers

    // Two for loops, first for each row and second for each column
    // Calculates the distance from the bottom and top, checks the shortest, does the same thing with left and right, checks which is 
    // the shortest out of all of them, and then prints out a . if it's 10 or above and the number if it's below 10
    for(int i = 1; i<=x; i++)
    {
        for(int j = 1; j<=y; j++)
        {

            int top = i;
            int bottom = x - i + 1;
            int shortest_vertical;
        
            if (top < bottom)
            {
                shortest_vertical = top;
            } else {
                shortest_vertical = bottom;
            }   
            

            int left = j;
            int right = y - j + 1;
            int shortest_horizontal;

            if (left < right)
            {
                shortest_horizontal = left;
            } else {
                shortest_horizontal = right;
            } 

            int shortest;

            if (shortest_vertical < shortest_horizontal)
            {
                shortest = shortest_vertical;
            } else {
                shortest = shortest_horizontal;
            }
            
            if (shortest > 9) {
                printf(".");
            } else {
                printf("%d", shortest);
            }
        }
        printf("\n");
    }
}