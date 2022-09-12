#include<stdio.h>

int main(){}

//Thank You Dr Casey and exploringbinary.com
int isPowerOfTwoClever (unsigned int x)
{
  return ((x != 0) && !(x & (x - 1)));
}