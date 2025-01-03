// C Basic 8 - W3 Schools Learning Path
// Written by foxtw00

#include <stdlib.h>
#include <stdio.h>

// Define Testing :D
#define MAX 15

int main(){

    // Declare variables
    char daystring[MAX];
    int days, years, weeks;

    // User input
    printf("Input days: ");
    fgets(daystring, MAX, stdin);
    printf("\n");

    // Atoi to convert  to int
    days = atoi(daystring);

    // Conversion block
    years = days / 365;
    weeks = (days % 365)/7;
    days = days - ((years*365) + (weeks*7));
    
    // Output
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d \n", days);

    return 0;

}
