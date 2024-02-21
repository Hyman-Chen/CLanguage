#include <stdio.h>
int main() {
    // 输出函数对于i++ 或i--的计算：先输出，后运算
    int i = 010, j = 10;
    printf("%d,%d\n", i++, j--);
    // 10,8

    // 变量格式输出
    int a;
    a = 125.534; // a 此处a会被格式化为整型变量，直接舍去小数部分
    printf("a = %d\n", a);
    // a = 125
    
    int b;
    b = 20.0 / 3; //此处20.0 / 3 =6.6666，b = 6
    printf("b = %d\n", b);
    // b = 6
    
    int c;
    c =(int)125.521 % 4; // 强制类型转换会将浮点型转换成整型，直接舍去小数
    printf("c = %d\n", c);
    // c = 1
    
    int d;
    d = 5 << 2;
    printf("d = %d\n", d);
    // d = 16

    /*
    switch的用法：
    case后面不能跟变量，如果没有break，则case成立及后面的case语句都会执行，default表示缺省。
    */
    char ch;
    int m;

    for (m = 65; m < 68; m++) // i = 65, 66, 67
    {
        ch = m + 32; // c = 'a', 'b', 'c'
        switch (ch)
        {
            case 'a':
                break;
            case 'b':
                break;
            case 'c':
                printf("%c,", ch);
                break;
            default:
                printf("end\n");
                break;
        }
    }
    /*
    default 语句只有在下列情况才会输出：
    1、匹配失败
    2、上面匹配成功，但是没有break语句
    default 语句的位置影不影响输出结果，主要看default语句后面有没有break语句。
    */
    /*
    c，
    */

    return 0;
}
