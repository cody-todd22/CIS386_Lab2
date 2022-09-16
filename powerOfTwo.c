#include<stdio.h>

//Thank You Dr Casey and exploringbinary.com
int isPowerOfTwoClever (unsigned int x)
{
  return ((x != 0) && !(x & (x - 1)));
}

int main()
{
  int num;
  printf("Please enter a number to check if it is a power of 2: ");
  scanf("%d", &num);

  isPowerOfTwoClever(num);
}