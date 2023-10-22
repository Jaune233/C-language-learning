#define _CRT_SECURE_NO_WARNING 1

int main()
{
    int input;
    printf("Do you like vocaloid(1/0)?;");
    scanf("%d",&input);
    if(input==1)
       printf("Whos your favorite vitual singer?\n");
    else
       printf("You didnt pass.\n");
return 0;
}