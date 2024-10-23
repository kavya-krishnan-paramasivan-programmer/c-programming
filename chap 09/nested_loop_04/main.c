// Creating a nested loop in C with CodeBlocks
// chap - 09 page 119

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

//The Application starts with the main() function
int main() {
    printf("Creating a nested loop in C with CodeBlocks\n\n");

    //Variable declaration and initialization
    int outer_counter, inner_counter;

    // The for loop starts here
    for(outer_counter = 6; outer_counter >= 1; outer_counter--)
    {
        // A loop within a loop
        for(inner_counter = 5; inner_counter >= outer_counter; inner_counter--)
        {
            // The statement to be printed
            printf(" %d ", inner_counter);
        }
        printf("\n");
    }
    return 0;
}
