#include<stdio.h>
#include<math.h>
int main()
{
    int flag = 1;
    int num = -1230;
   if (num < 0)
    {
        flag = 0;
        num = -num;
    }
    int count = 0;
    int temp = num;
    while (temp)
    {
        temp = temp / 10;
        count++;
    }
    //printf("%d", count);
    int sum = 0;
    while (count)
    {
        int n = num % 10;
        count--;
        sum += n * pow(10, count);
       // printf("%d\n", sum);
        num = num / 10;
       
    }

    if (flag == 0)
    {
        sum = -sum;
    }
    printf("%d", sum);
}