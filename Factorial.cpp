#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Factorial1(int n)
{//利用非递归函数
	int sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}
	return sum;
}
int Factorial2(int n)
{
	int i = n;
	if (i == 1)
	{
		return 1;
	}
	else
	{
		return Factorial2(n - 1) * n;
	}
}
//int main()
//{
//	int n;
//	printf("请输入所要计算阶乘的数字：");
//	scanf("%d", &n);
//	int ret = Factorial1(n);
//	//int ret = Factorial2(n);
//	printf("运算结果为：%d",ret);
//
//}