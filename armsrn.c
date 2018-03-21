#include <stdio.h>
#include <math.h>
 
void main()
{
    int number, sum = 0, a = 0, cube = 0, temp;
 
    printf ("enter any number");
    scanf("%d", &number);
    temp = number;
    while (number != 0)
    {
        a = number % 10;
        cube = pow(a, 3);
        sum = sum + cube;
        number = number / 10;
    }
    if (sum == temp)
        printf ("yes");
    else
        printf ("no");
}
