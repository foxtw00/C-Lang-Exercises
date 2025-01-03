// C Basic 5 - W3 Schools Learning Path
// Written by foxtw00

#include <stdio.h>
#include <stdlib.h>

#define MAX 15

int main(void){

    // Declare variables, char used for fgets will be transformed later
    int rfinal, sfinal = 0;
    char len[10];
    char wid[10];
    char side[10];

    // Input (fgets)
    printf("Input an integer for the rectangle's length.\n");
    fgets(len, MAX, stdin);
    printf("Input an integer for the rectangle's width.\n");
    fgets(wid, MAX, stdin);

    // Str to Int
    int vallen = atoi(len);
    int valwid = atoi(wid);

    // Calculation
    rfinal = vallen * valwid;

    // Rectangle Print
    printf("Rectangle area is %i\n", rfinal);
    
    // Square Input
    printf("Now solve for a square. Input a side length.\n");
    fgets(side, MAX, stdin);

    // Square Str to Int
    int valside = atoi(wid);

    // Calculation
    sfinal = valside * valside;

    // Square Print
    printf("Square area is %i\n", sfinal);

    return 0;

}
