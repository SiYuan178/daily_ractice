#include<stdio.h>
int power(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	if (k == 1)
	{
		return n;
	}
	return n * power(n, k - 1);
}
//int main()
//{
//	printf("%d", power(3, 3));
//	return 0;
//}