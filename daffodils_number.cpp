#include<stdio.h>
#include<math.h>
void daffodils()
{
	for (int i = 1; i <= 999999; i++)
	{
		int temp = i;
		int count = 0;
		int sum = 0;
		while (temp)
		{
			temp = temp / 10;
			count++;//用于求出数的位数
		}
		temp = i;
		int count2 = count;
		while (count)
		{
			int num = temp % 10;//求出每位数字
			sum += pow(num, count2);//对每位数字的求count次方并求和
			temp /= 10;
			count--;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
}
//int main()
//{
//	daffodils();
//	return 0;
//}