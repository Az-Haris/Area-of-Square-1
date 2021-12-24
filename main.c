#include <stdio.h>
#include <math.h>
#include <conio.h>

main()
{
    float Side, Area;
    printf("Enter The Side Length of Square = ");
    scanf("%f", &Side);
    Area =pow(Side,2);
    printf("Square Area is = %.2f Square Unit", Area);
    getch();
    return 0;
}
