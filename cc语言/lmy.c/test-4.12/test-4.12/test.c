#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//�ҳ��ִ����������
void juge(int arr[],int sz)
{
	int i=0;
	int count=0;
	int j=0;
	int maxcount=0;
	int max=0;
	for(i=0;i<sz-1;i++)
	{
		for(j=0;j<sz-1;j++)
		{
			if(arr[j]==arr[j+1])
			{
				count++;
			}
		}
		if(count>maxcount)
			{
				maxcount=count;
				max=arr[j];
			}
			count=0;
			}
	printf("%d\n",max);
}
int main()
{
	int i=0;
	int j=0;
	int count=0;
	int max=0;
	int maxcount=0;
	int arr[]={1,1,3,4,5,3,3};
	int sz=sizeof(arr)/sizeof(arr[0]);
	juge(arr,sz);
	//for(i=0;i<sz-1;i++)
	//{
	//	for(j=0;j<sz-1;j++)
	//	{
	//		if(arr[j]==arr[j+1])
	//		{
	//			count++;//�������ֳ��ִ���
	//		}
	//		}
	//	if(count>maxcount)//�Ƚϲ�ͬ���ֳ��ִ���
	//		{
	//			maxcount=count;
	//			max=arr[j];
	//		}
	//	count=0;//���㣬�����ۼƲ�ͬ���ֳ��ֵĴ���
	//	}
	//printf("%d\n",max);
	return 0;
	}
