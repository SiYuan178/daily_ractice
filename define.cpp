#include<stdio.h>
#define SWAP(n) ((n&(0x55555555))<<1|(n&(0xaaaaaaaa))>>1)
int main()
{
	printf("%d\n", SWAP(4));
	return 0;
}