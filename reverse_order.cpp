#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void inverse(int *a,int n)
{
	for(int i=0;i<n/2;i++)
	{
			int temp=a[n-i-1];
			a[n-i-1]=a[i];
			a[i]=temp;
		
	}
}

int str_count(char *substr,char *str)
{
	if(substr==NULL||str==NULL)
	{
		return 0;
	}
	int i=0;
	int count=0;
	while(*(str+i))
	{
		int j=0;
		int k=i;
		while(*(substr+j)&&*(str+k)==*(substr+j))
		{
			k++;
			j++;
		}
		if(!*(substr+j))
		{
			count++;
		}
		i++;
	}
	return count;
}
//int str_count(string str1,string str2)
//{
//	int count=0;
//	int start=0;
//	while((start=str1.find(str2,start))<str1.length())
//	{
//		count++;
//		start++;
//	}
//	return count;
//}
int main()
{
	int a[5]={2,9,1,0,4};
	inverse(a,5);
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
	char str[]="wejihdwe";
	char substr[]="we";
	int count=str_count(substr,str);
	cout<<count;
	return 0;
	
}
