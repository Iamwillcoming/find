#define _CRT_SECURE_NO_WARNINGS 1

#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char input[20]={ 0};

	system("shutdown -s -t 60");

again:
	printf("��ע�⣬��ĵ�����һ���ӹػ���������룺��������ȡ���ػ�\n");
	scanf("%s",input);
	if(strcmp(input,"������")==0);
	{
		system("shutdown -a");
	}

	

	return 0;
}
//{
//	int a=1;
//	a<<1;
//	printf("%d",a);
//	return 0;
//}
//	
	
	
	
	
	
	
	//{
//	int a=5%2;
//	printf("%d\n",a);
//		return 0;
//}





//int main()
//{
//	int arr[10]= {1,2,3,4,5,6,7,8,9,10};
//	int i=0;
//	while(i<10)
//	{
//		printf("%d\n",arr[i]);
//		i++;
//	}
//	return 0;
//}






//int main()
//{
//	int num1=0;
//	int num2=0;
//	int sum=0;
//	
//	scanf("%d%d",&num1,&num2);
//	sum= num1+num2;
//	printf("sum=%d\n",sum);
//	return 0;
//}



//{
//	int line =0 ;
//	printf("�����ѧ\n");
//
//	while(line<20000)
//	{
//	printf("��һ�д���: %d\n",line);
//	line++;
//	}
//	if(line>20000)
//	printf("good offer\n");
//	return 0;
//
//}
//{
//	int input = 0;
//	printf("�����ѧ׬Ǯ?(1/0) >:");
//	scanf("%d\n", &input);
//	if(input==1)
//		printf("��Ǯ�Ұ���\n");
//	else
//	printf("�ú�ѧϰ��ú���������Ե�Ұ���\n");
//	
//}
//{
//	int input= 0;
//	printf("��Ҫ�ú�ѧϰ�𣿣�1/0��>��");
//	scanf("%d",&input);
//    if(input==1)
//		printf("��offer\n");
//	else
//		printf("������");
//}
//{
//	printf("%s\n",'32');
//	//printf("%d\n",strlen("C:\test\32\test.c"));
//	return 0;
//}
//{
//char arr1[] ="abc";
//char arr2[] = {'a', 'b', 'c'};
	//printf("%d\n", strlen(arr1));
	//pr//intf("%d\n",strlen(arr2));
	//return 0;

//}
//{
	//char arr1[] ="abc";
	//char arr2[] = {'a' ,'b', 'c' ,0};
	//printf("%s\n",arr1);
	//printf("%s\n",arr2 );
//	return 0;
