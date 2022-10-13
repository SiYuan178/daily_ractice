#include<stdio.h>
#include<math.h>
int sum(int a,int n)
{
	//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
	int sum = 0;
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		temp = temp + pow(10, i) * a;
		sum += temp;
	}
	return sum;
}
int main()
{
	printf("%d\n", sum(2,2));
	return 0;
}