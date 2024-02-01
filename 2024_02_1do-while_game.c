#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	int left = 1;
//	int right = 1;
//	int i = 0;
//	char arr1[] = "welcome to wonderland!";
//	char arr2[] = "######################";
//	right = sizeof(arr1) / sizeof(arr1[0]);
//	for (left = 0, right = (sizeof(arr1) / sizeof(arr1[0]))-2; left <= right; left++, right--)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(100);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main() 
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++) 
//	{
//		printf("enter your password:");
//		scanf("%s",&password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("ok\n");
//			break;
//		}
//	}
//	if (i==3 || i > 3)
//		printf("error\n");
//	return 0;
//}


void menu() 
{
	printf("Plese enter a number:\n");
	printf("**********MENU**********\n");
	printf("********1.START*********\n");
	printf("*********2.EXIT*********\n");
}

void game() 
{
	int ret = rand()%100+1;
	int guess = 0;
	printf("Please guess a num between 1 and 100.\n");
	
	while (1)
	{
		
		scanf("%d", &guess);
		if (guess > ret)
			printf("Too big.\n");
		else if (guess < ret)
			printf("Too small.\n");
		else
		{
			printf("Right!\n\n");
			break;
		}
	}
}

int main() 
{
	int input = 0;
	do
	{
		menu();
		srand((unsigned int)time(NULL));
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:

			break;
		default:
			printf("Please enter a poper num!");
			break;
		}
	} while (input);
	return 0;
}