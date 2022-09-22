#include <stdio.h>

int bsMultiply(unsigned int number, unsigned int powerOfTwo)
{
    if(powerOfTwo == 0)
    {
        return 0;
    }
    if(number > 2000000000)
    {
        printf("Your number is too large");
        return 0;
    }
    if(powerOfTwo > 256)
    {
        printf("Your power of two is too large");
        return 0;
    }
    if(!((powerOfTwo != 0) && !(powerOfTwo & (powerOfTwo - 1))))
    {
        return (powerOfTwo + bsMultiply(number, powerOfTwo - 1));
    }
}

int main()
{
    unsigned int number, powerOfTwo;

    number = 15;
    powerOfTwo = 8;

    return bsMultiply(number, powerOfTwo);
}