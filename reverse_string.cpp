#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse_string(char* string)
{
	int len = strlen(string);
	int temp = 0;
	if (len < 1)
	{
		return;
	}
	else
	{
		temp = string[0];
		string[0] = string[len - 1];
		string[len - 1] = '\0';
		reverse_string(string + 1);
		string[len - 1] = temp;
	}
}
//int main()
//{
//	char str[8] = "hello";
//	reverse_string(str);
//	printf("%s", str);
//	return 0;
//}