#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	double fa_height,ma_height,boy_height,gril_height;
	printf("�����븸�׵���ߣ�");
	scanf("%lf",&fa_height);
	printf("������ĸ�׵���ߣ�");
		scanf("%lf",&ma_height);
		boy_height=(fa_height+ma_height)*0.54;
		gril_height=(fa_height*0.923+ma_height)/2;
		printf("�к������=   %lf\n",boy_height);
		printf("Ů�������= %lf",gril_height);
		return 0;


}