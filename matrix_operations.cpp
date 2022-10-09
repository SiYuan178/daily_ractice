#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int sum(int arr[][10],int m,int n)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }
    return sum;

}
void reverse(int arr[][10], int m, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

}
int main() {
    int m = 0, n = 0;
    int arr[10][10] = { 0 };
    scanf("%d%d", &m, &n);
    int sums = sum(arr, m, n);
    reverse(arr, m, n);
    printf("%d", sums);
    return 0;
}