#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void single_dog(int num[], int n)
{
    int a = 0;//0���κ������Ϊ�Ǹ�������
    for (int i = 0; i < n; i++)
    {
        a ^= num[i];
    }
    printf("����Ϊ��%d\n", a);
}
void single_dog2(int num[], int n)
{
    int a = 0;//0���κ������Ϊ�Ǹ�������
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        a ^= num[i];
    }
    for (int i = 0; i < 32; i++)
    {
        if ((a >> i) & 1 == 1)
        {
            pos = i;
            break;
       }
    }
    int b = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        if ((num[i] >> pos) & 1 == 1)
        {
            b ^= num[i];
        }
        else
        {
            c ^= num[i];
        }
    }
    printf("��������Ϊ��%d %d\n", b, c);

}
//int main()
//{
//    int num[8] = { 2,4,2,1,4,5,5,6 };
//    single_dog2(num, 8);
//}
