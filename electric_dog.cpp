#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int count = 0;
	scanf("%d", &count);
	while (count--)
	{
		int n = 0;
		int first = 0;
		scanf("%d", &n);
		int a[1000] = { 0 };
		for (int i = 1; i <= n; i++)
		{
			scanf("%d", &a[i]);
		}
		if (n <= 3)
		{
			printf("regret\n", n);
			continue;
		}
		for (int i = 4; i <= n; i++)
		{
			if (i >= 4 && a[i - 3] >= a[i - 1] && a[i - 2] <= a[i])
			{
				first = i;
				break;
			}
			if (i >= 5 && a[i - 3] == a[i - 1] && a[i - 2] <= a[i] + a[i - 4])
			{
				first = i;
				break;
			}
			if (i >= 6 && a[i - 3] <= a[i - 1] + a[i - 5] && a[i - 2] >= a[i] + a[i - 4]&&a[i-1]<=a[i-3]&&a[i]<=a[i-2])
			{
				first = i;
				break;
			}
		}
		if (first > 0)
		{
			printf("%d\n", first);
		}
		else
		{
			printf("regret\n");
		}
	}
}