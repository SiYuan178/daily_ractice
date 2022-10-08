#include<stdio.h>
void swap(int* arr1, int* arr2, int n)
{
	for (int i = 0; i < n; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}
void print1(int* arr, int n)
{
	//实现print()  打印数组的每个元素
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 6,5,4,3,2,1 };
	swap(arr1, arr2, 6);
	print1(arr1, 6);
	printf("\n");
	print1(arr2, 6);

}