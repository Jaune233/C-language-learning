int main()
{
int a=2;
int b=a<<1;
//左移操作符，移动的是二进制位
//整形是四字节，一个字节是8 bit
//故此处的a应为00000000 00000000 00000010
//向左移动一位，第一处的0被移走，最后的一位补充0
//应为00000000 00000000 00000100
//100对应的十进制数字即为4
printf("%d\n",b);
return 0;
}