#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() { 
//	char arr[] = { 'b','i','t' };
//	printf("%d\n",strlen(arr));
//	return 0; }

//int main() {
//	printf("%d\n", strlen("%d\n",strlen("c:\test\121")));
//	return 0;
//}


int main() { 
	printf("����һ�����ڵ���һ��С�ڵ���һ�ٵ�������\n");
	scanf("%d",&M);
	int n = M % 5;
	if (n =0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0; }