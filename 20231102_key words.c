#include <stdio.h>

typedef unsigned int  u_int;
int main()
{
	{
		unsigned int a = 100;

	}


	//��Ϊ��ʱ��unsinged int̫���ˣ�Ϊ��
	//���ǿ������¶����⴮�ؼ���
	//�ض��壬��typedef

	{

		u_int a = 100;
		printf("%d\n", a);


	}
	return 0;
}
