#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() { 
//	int day=0;
//	scanf("%d",&day);
//	switch (day)
//	{
//	case 1:
//		printf("monday");
//	case 2:
//		printf("tuesday");
//	case 3:
//		printf("wednesday");
//	case 4:
//		printf("thursday");
//	case 5:
//		printf("friday");
//	case 6:
//		printf("saturday");
//	case 7:
//		printf("sunday");
//	}
//	return 0; }

//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday");
//		break;
//	case 6:
//	case 7:
//		printf("weekend");
//		break;
//	default:
//		printf("please input a num taht between 1 and 7.");
//	}
//	return 0;
//}

//int main() { 
//	int i = 0;
//	while (i <= 10) {
//		if (5==i)
//			break;
//		printf("%d\n",i);
//		i++;
//	}
//	return 0; }


//int main() {
//	int i = 0;
//	while (i <= 10) {
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main() {
//	char ch = 0;
//	while ((ch=getchar())!=EOF) {
//		
//		putchar(ch);
//	}
//	return 0;
//}


//int main() {
//	char password[55];
//	printf("please enter your password\n");
//	scanf("%s",&password);
//	printf("please confirm your password.(Y/N)\n");
//	int cleaner=0;
//	while ((cleaner=getchar())!='\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if ('Y' == ch||ch=='y'||ch=='1')
//		printf("confirmation successful!\n");
//	else
//		printf("please confirm your password!\n");
//
//	return 0;
//}

int main() {
	int ch = 0;
	while((ch=getchar())!=EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		else
		putchar(ch);
	}
	return 0;
}