#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
extern int Add(int x, int y);//À¨ºÅÄÚÒà¿É×÷int £¬int
int main() 
{
	int a = 20, b = 69;
	printf("input 2 nums:");
	scanf("%d %d",&a,&b);
	int sum = Add(a, b);
	printf("sum=%d\n",sum);
	return 0;
}