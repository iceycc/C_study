#include <stdio.h>
#include <windows.h>
int main()
{

    //  C语言变量和数据类型
    // 变量 variable
    // = 赋值 assign 赋值是指把数据放到内存的过程
    // 数据类型
    // char 字符型
    // int      整数 integer
    // short    短整型
    // long     长整型
    // float    单精度浮点型
    
    int a1 = 20, a2 = 345, a3 = 700, a4 = 22;
    int b1 = 56720, b2 = 9999, b3 = 20098, b4 = 2;
    int c1 = 233, c2 = 205, c3 = 1, c4 = 6666;
    int d1 = 34, d2 = 0, d3 = 23, d4 = 23006783;
    // printf() 的高级用法
    // %[flag][width][.precision]type
    printf("%-9d %-9d %-9d %-9d\n", a1, a2, a3, a4);
    printf("%-9d %-9d %-9d %-9d\n", b1, b2, b3, b4);
    printf("%-9d %-9d %-9d %-9d\n", c1, c2, c3, c4);
    printf("%-9d %-9d %-9d %-9d\n", d1, d2, d3, d4);
    printf("hello world11!/n");
    system("pause");
}
