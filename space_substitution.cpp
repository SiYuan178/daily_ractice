#define _CRT_SECURE_NO_WARNINGS 18
#include<stdio.h>
char* replacement(char* str, char c)
{
	int n = 0;
	char* str1 = str;
	while (*str)
	{
		if (*str == ' ')
		{
			n++;
		}
		str++;
	}
	char* begin = str;
	char* end = str + 2*n;
	while (begin != end)
	{
		if (*begin != ' ')
		{
			*end--=*begin--;
			
		}
		else
		{
			*end-- = '0';
			*end-- = '2';
			*end-- = '%';
			begin--;
		}
	}
	return str1;

}
//int main()
//{
//	char arr[20] = "I miss you";
//	printf("%s\n", replacement(arr, ' '));
//}