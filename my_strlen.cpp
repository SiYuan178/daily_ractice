#include<stdio.h>
int my_strlen(char* s)
{//非递归实现strlen
	char* p = s;
	int i = 0;
	while (*p!='\0')
	{
		p++;
		i++;
	}
	return i;
}
int my_strlen2(char* s)
{//递归实现strlen
	if (*s == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen2(s + 1);
	}
}
int main()
{
	char str[8] = "hello12";
	printf("%d", my_strlen(str));
	printf("   %d", my_strlen2(str));
	return 0;
}