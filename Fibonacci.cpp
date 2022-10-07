#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int fibonacci(int n)
{//�ݹ�ʵ�����n��쳲�������
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}
int fibonacci2(int n)
{//�ǵݹ�ʵ�����n��쳲�������
	int* num = (int*)malloc(sizeof(int) * n);
	num[0] = 1;
	num[1] = 1;
	for (int i = 2; i < n; i++)
	{
		num[i] = num[i - 1] + num[i - 2];
	}
	int a= num[n - 1];
	free(num);
	num = NULL;
	return a;
}
int main()
{
	int n;
	printf("�����룺");
	scanf("%d", &n);
	printf("%d\n", fibonacci(n));
	printf("%d\n", fibonacci2(n));
	return 0;
}