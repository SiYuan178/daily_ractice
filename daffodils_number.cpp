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
			count++;//�����������λ��
		}
		temp = i;
		int count2 = count;
		while (count)
		{
			int num = temp % 10;//���ÿλ����
			sum += pow(num, count2);//��ÿλ���ֵ���count�η������
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