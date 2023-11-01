#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//强制类型转换
//int main()
//{
//
//	int a = (int)3.;
//	printf("%d\n",a);
//	return 0;
//}



//&&并
//int main() {
//
//	int a = 1, b = 2;
//	if (a && b)
//		printf("%d\n", a+b);
//	return 0;
//}



//&&得到的真假
//int main() {
//
//	int a =1, b = 0;
//	printf("%d\n",a&&b);
//	return 0;
//}



//||或
//int main() {
//
//	int a =1, b = 0;
//	printf("%d\n",a||b);
//	return 0;
//}



//三目操作符exp1？exp2:exp3
//int main()
//{
//
//	int a=0, b=3, max;
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	//这段代码可以用三目操作符写作：
//	max = a > b ? a : b;
//	//a>b即为if条件，a为if结果，b为else结果
//	printf("%d\n",max);
//	return 0;
//}


//如果想让用户赋值再比较，需用scanf函数

//int main()
//{
//
//	int a , b , max;
//	//a>b即为if条件，a为if结果，b为else结果
//	printf("please input two numbers:");
//	scanf("%d %d",&a,&b);
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}



//逗号操作式
int main() {

	int a, b, c;
	a = 0, b = 7, c = 9;
	int d = (a=9-a,b=a+b,c=c-b);
	//逗号表达式的最终结果是最后一个式子的结果
	printf("%d\n",d);
	printf("%d\n", c);
	//运行结果为-7，-7
	//说明最后一个式子同时赋给了d和c
	return 0;
}
