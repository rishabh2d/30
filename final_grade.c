/*
This program asks for details about your current grade in class
and displays the percent you need to get atleast to achieve the final grade of your choice.
*Assuming all input is valid. 
 */
#include <stdio.h>

int main(void) {
    char grade;
    float percentToGet, currentPercent, finalweight, finalgrade;
    
    printf("Enter the grade you want in class: ");
    scanf("%s", &grade);
    printf("Enter the percent you need to get that grade: ");
    scanf("%f", &percentToGet);
    printf("Enter your current percent in the class: ");
    scanf("%f", &currentPercent);
    printf("Enter the weight of the final: ");
    scanf("%f", &finalweight);
    
    finalgrade = (percentToGet - ((100 - finalweight) / 100) * currentPercent) * (100 / finalweight);
    
    printf("You need to get atleast: ");
    printf("%.2f", finalgrade);
    printf("%%");
    printf(" to get a ");
    printf("%c", grade);
    printf(" in the class.\n\n");
    
    return 0;
}
