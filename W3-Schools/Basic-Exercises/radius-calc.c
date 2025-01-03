// C Basic 6 - W3 Schools Learning Path
// Written by foxtw00

#include <stdio.h>
#include <stdlib.h>

// Define Testing :)
#define PI 3.14
#define MAX 15

int main(){
    
    // Declare Variables
    float peri, area, radi;

    // Input
    printf("\nInput circle radius: ");
    scanf("%f", &radi);
    printf("\n");

    // Calculations
    peri = (2 * PI) * radi;
    area = PI * (radi * radi);

    // Printout
    printf("Perimiter: %f\n", peri);
    printf("Area: %f", area);

    return 0;
    
}
