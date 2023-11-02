#include <stdio.h>

typedef unsigned int  u_int;
int main()
{
	{
		unsigned int a = 100;

	}


	//因为这时候unsinged int太长了，为简化
	//我们可以重新定义这串关键字
	//重定义，用typedef

	{

		u_int a = 100;
		printf("%d\n", a);


	}
	return 0;
}
