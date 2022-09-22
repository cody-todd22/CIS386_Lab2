#include <stdio.h>

int main()
{
    float a, b, c;

    a = 50000000;
    b = -50000000;
    c = 1;

    if(c + (a + b) == (c + a) + b)
    {
        printf("The equations are equal\n");
        //printf("c + (a + b) equals %f\n");
        //printf("(c + a) + b equals %f\n");
    }
    else
    {
        printf("The equations are not equal\n");
        //printf("c + (a + b) equals %f\n");
        //printf("(c + a) + b equals %f\n");
    }
}