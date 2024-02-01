#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int t = 0;//目标值
	scanf("%d", &t);
	int num = sizeof(arr) / sizeof(arr[0]);
	//数组的元素个数
	int left = 0;
	int right = num - 1;
	int mid = 0;//左端数，右端数，中间数
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < t)
			left = mid + 1;
		else if (t < arr[mid])
			right = mid - 1;
		else
		{
			printf("这是在数组中的第%d个数\n", mid);
			break;
		}
			
	}
	if (left > right)
		printf("错误404");
	return 0;
}