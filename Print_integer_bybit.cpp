#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void printf_bybite(int n)
{//�ݹ�ʵ�ְ�λ���
	int a = 0;
	if (n <10)
	{
		a = n % 10;
	    printf("%d ", n);
	}
	else
	{
		printf_bybite(n/10);
		printf("%d ", n % 10);
	}
}
void printf_bybite1(int n)
{
	int a[10] = { 0 };
	int k = 0;
	while (n)
	{
		a[k++] = n % 10;
		n = n / 10;
	}
	
	for (int i = k-1; i >= 0; i--)
	{
		printf("%d ", a[i]);
	}
}
	
int main()
{
	printf("���������֣�");
	int n;
	scanf("%d", &n);
	printf("��λ���Ϊ��");
	printf_bybite1(n);
	return 0;

}