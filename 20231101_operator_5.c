#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//
//	int a = (int)3.;
//	printf("%d\n",a);
//	return 0;
//}

//int main() {
//
//	int a = 1, b = 2;
//	if (a && b)
//		printf("%d\n", a+b);
//	return 0;
//}

//int main() {
//
//	int a =1, b = 0;
//	printf("%d\n",a&&b);
//	return 0;
//}

//int main() {
//
//	int a =1, b = 0;
//	printf("%d\n",a||b);
//	return 0;
//}

//int main()
//{
//
//	int a=0, b=3, max;
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	//��δ����������Ŀ������д����
//	max = a > b ? a : b;
//	//a>b��Ϊif������aΪif�����bΪelse���
//	printf("%d\n",max);
//	return 0;
//}


//��������û���ֵ�ٱȽϣ�����scanf����

//int main()
//{
//
//	int a , b , max;
//	//a>b��Ϊif������aΪif�����bΪelse���
//	printf("please input two numbers:");
//	scanf("%d %d",&a,&b);
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}

int main() {

	int a, b, c;
	a = 0, b = 7, c = 9;
	int d = (a=9-a,b=a+b,c=c-b);
	//���ű��ʽ�����ս�������һ��ʽ�ӵĽ��
	printf("%d\n",d);
	printf("%d\n", c);
	//���н��Ϊ-7��-7
	//˵�����һ��ʽ��ͬʱ������d��c
	return 0;
}