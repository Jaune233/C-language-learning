#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() { 
//	int i = 1;
//	do {
//		printf("%d\n",i);
//		i++;
//	} while (i<=10);
//	return 0; }

//int main() 
//{
//	int i = 1;
//	int jc = 1;
//	int n = 0;
//	int sum = 0;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++) 
//	{
//		jc *=i;
//		sum += jc;
//	}
//	printf("%d!=%d\n",i-1,j);
//	printf("sum=%d\n", sum);
//	return 0;
//}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int t = 0;//Ŀ��ֵ
	scanf("%d", &t);
	int num = sizeof(arr) / sizeof(arr[0]);
	//�����Ԫ�ظ���
	int left = 0;
	int right = num - 1;
	int mid = 0;//��������Ҷ������м���
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < t)
			left = mid + 1;
		else if (t < arr[mid])
			right = mid - 1;
		else
			printf("Ŀ�����������еĵ�%d����\n", mid);
		break;
	}
	if (left > right)
		printf("����404");
	return 0;
}