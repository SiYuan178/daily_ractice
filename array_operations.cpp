#include<stdio.h>
void init(int* arr,int n)
{
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
	for (int i = 0; i < n; i++)
	{
		arr[i] = 0;
	}

}
void print(int* arr, int n)
{
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}
void reverse(int* arr, int n)
{
//ʵ��reverse()  �����������Ԫ�ص�����
	for (int i = 0; i < n / 2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] = temp;
	}

}
int main()
{
	int num_arr[6] = { 1,3,5,7,9,11 };
	init(num_arr, sizeof(num_arr) / sizeof(num_arr[0])); 
	print(num_arr, sizeof(num_arr) / sizeof(num_arr[0]));
	printf("\n");
	for (int i = 0; i < 6; i++)
	{
		num_arr[i] = i;
	}
	print(num_arr, sizeof(num_arr) / sizeof(num_arr[0]));
	printf("\n");
	reverse(num_arr, sizeof(num_arr) / sizeof(num_arr[0]));
	print(num_arr, sizeof(num_arr) / sizeof(num_arr[0]));
}
