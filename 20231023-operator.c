#include <stdio.h>

int main() 
{
    int a = 5, b = 3, result;

    // 使用算术操作符
    result = a + b; // 加法
    printf("a + b = %d\n", result);

    result = a - b; // 减法
    printf("a - b = %d\n", result);

    // 使用比较操作符
    if (a > b) {
        printf("a 大于 b\n");
    } else {
        printf("a 不大于 b\n");
    }

    // 使用逻辑操作符
    int x = 1, y = 0;
    if (x && y) {
        printf("x 和 y 都为真\n");
    } else {
        printf("x 和 y 不都为真\n");
    }

    // 使用赋值操作符
    a += 2; // 等同于 a = a + 2
    printf("a 的值现在为 %d\n", a);

    // 使用位操作符
    int num1 = 5; // 二进制：0101
    int num2 = 3; // 二进制：0011
    result = num1 & num2; // 位与操作
    printf("num1 & num2 = %d (二进制：%d)\n", result, result);

    return 0;
}