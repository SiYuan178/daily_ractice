#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int f0 = 0;
//	int f1 = 1;
//	while(1)
//	{
//		if (n == f0)
//		{
//			printf("0\n");
//			return 0;
//		}
//		if (n < f0)
//		{
//			printf("%d\n", f0 - n);
//			return 0;
//		}
//		if (n > f0 && n <= f1)
//		{
//			int d1 = n - f0;
//			int d2 = f1 - n;
//			int d = d1 < d2 ? d1 : d2;
//			printf("%d\n", d);
//			return 0;
//		}
//		int f2 = f0 + f1;
//		f0 = f1;
//		f1 = f2;
//	}
//	return 0;
//}