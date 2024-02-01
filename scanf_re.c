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
//	char c; //用来存储用户输入的字符
//	printf("请输入第一个整数："); //提示用户输入第一个整数
//	scanf("%d", &a);
//	printf("请按空格键继续："); //提示用户按空格键继续
//	do {
//		scanf("%c", &c); //读取用户输入的字符
//	} while (c != ' '); //如果不是空格，就继续循环
//	printf("请输入第二个整数："); //提示用户输入第二个整数
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
//	printf("请输入第一个和第二个数字，中间用空格隔开，输入完毕后请按回车键:\n");
//	scanf("%d %d",&num1,&num2);
//	float mm = DIV(num1, num2);
//		printf("您的答案为%f\n", mm);
//	if (fmod(mm,2) == 0)
//		printf("再来一瓶\n");
//	else
//		printf("谢谢品尝\n");
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