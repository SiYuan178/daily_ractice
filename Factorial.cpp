#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Factorial1(int n)
{//���÷ǵݹ麯��
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
//	printf("��������Ҫ����׳˵����֣�");
//	scanf("%d", &n);
//	int ret = Factorial1(n);
//	//int ret = Factorial2(n);
//	printf("������Ϊ��%d",ret);
//
//}