#include<stdio.h>
void DigitSum(int n,int* sum)
{
	if (n > 9)
	{
		DigitSum(n / 10,sum);
	}
	*sum+= n % 10;

}
//int main()
//{
//	int sum = 0;
//	 DigitSum(1729,&sum);
//	printf("%d", sum);
//}