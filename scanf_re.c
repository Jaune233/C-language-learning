//
//#define _crt_secure_no_warnings 1
//#include <stdio.h>
//
//int main() {
//	int a, b, sum;
//	scanf("%d %d",&a,&b);
//	sum = a + b;
//	printf("sum=%d",sum);
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main() {
//	int a, b, sum;
//	char c; //�����洢�û�������ַ�
//	printf("�������һ��������"); //��ʾ�û������һ������
//	scanf("%d", &a);
//	printf("�밴�ո��������"); //��ʾ�û����ո������
//	do {
//		scanf("%c", &c); //��ȡ�û�������ַ�
//	} while (c != ' '); //������ǿո񣬾ͼ���ѭ��
//	printf("������ڶ���������"); //��ʾ�û�����ڶ�������
//	scanf("%d", &b);
//	sum = a + b;
//	printf("sum=%d", sum);
//	return 0;
//}


//enum letter {
//	q,w,e,r,t,y,u,i
//};
//#include<stdio.h>
//int main() { 
//	enum  letter random = t;
//	printf("your lucky letter is the %dth letter ",random+1);
//	return 0; }


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//int main() { 
//	char input[20];
//	printf("What's your name?\n");
//	scanf("%s",&input);
//	if (strcmp(input,"Alan")==0)
//		printf("congratulations!");
//	else
//		printf("failed.");
//	return 0; }

//float DIV(float a,float b) {
//	float c = b / a;
//	return c;
//}
//
//int main() { 
//	int num1, num2;
//	printf("�������һ���͵ڶ������֣��м��ÿո������������Ϻ��밴�س���:\n");
//	scanf("%d %d",&num1,&num2);
//	float mm = DIV(num1, num2);
//		printf("���Ĵ�Ϊ%f\n", mm);
//	if (fmod(mm,2) == 0)
//		printf("����һƿ\n");
//	else
//		printf("ллƷ��\n");
//	return 0; }

//int main() { 
//	int arr[5] = { 1,5,7,8,9 };
//	int i=0;
//	while (i < 10) {
//		printf("%d\n",arr[i]);
//		i++;
//
//	}
//	return 0; }

#define ADD(X,Y) X+Y
int main() { 
	int a = 10;
	int b = 20;
	printf("%d\n",4*ADD(a,b));
	
	
	return 0; }