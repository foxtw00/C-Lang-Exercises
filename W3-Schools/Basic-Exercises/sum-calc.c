// C Basic 9 - W3 Schools Learning Path
// Written by foxtw00

#include <stdlib.h>
#include <stdio.h>

// Define Testing :D
#define MAX 15

int main(){

    // Variable delcarations
    char int1ch[MAX];
    char int2ch[MAX];
    int int1, int2, sum;

    // User input 1
    printf("Input First Integer: ");
    fgets(int1ch, MAX, stdin);
    printf("\n");

    // User input 2
    printf("Input Second Integer: ");
    fgets(int2ch, MAX, stdin);
    printf("\n");

    // Atoi for integers
    int1 = atoi(int1ch);
    int2 = atoi(int2ch);

    // Sum calc
    sum = int1 + int2;

    // Output
    printf("SUM OF BOTH: %i", sum);
    return 0;

}
