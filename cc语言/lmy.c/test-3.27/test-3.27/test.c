#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int n=0;
//	int i=1;
//	int sum=0;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		int tmp=1;
//		tmp =i*tmp;
//		sum=tmp+sum;
//	}
//	printf("%d\n",sum);
//	return 0;
//}
int fib(int i)
{
	if(i<=2)//쳲���������һ���͵ڶ�����Ϊ1
	{
		return 1;
	}
	if(i>2)
	{
		return fib(i-1)+fib(i-2);//�ݹ��㷨
	}
}
int main()
{
	int i=0;
	int b=0;
	scanf("%d",&i);
	 b=fib(i);//쳲���������
	printf("%d\n",b);
	return 0;

}