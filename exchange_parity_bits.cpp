#include<stdio.h>
#define SwapIntBit(n) (((n) & 0x55555555) << 1 | ((n) & 0xaaaaaaaa) >> 1) 
int main()
{
	int a = 1;
	printf("%0x\n", a);
	printf("%0x", SwapIntBit(a));
	return 0;
}