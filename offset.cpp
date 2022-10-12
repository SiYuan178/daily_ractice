#include<stdio.h>
struct S
{
	char name[10];
	int age;
	float score;
} s;
#define offsetof(StructType, MemberName) (size_t)&(((StructType *)0)->MemberName)

//int main()
//{
//	struct S s = { 0 };
//	int d = offsetof(struct S, score);
//	printf("%d", d);
//	return 0;
//}