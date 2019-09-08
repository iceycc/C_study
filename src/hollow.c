#include <stdio.h>
#include <windows.h>
int main()
{

    // 一 、C语言变量和数据类型
    // 1、变量 variable
    // = 赋值 assign 赋值是指把数据放到内存的过程
    // 2、数据类型
    // 数据类型除了指明数据的解释方式，还指明了数据的长度
    // char 字符型  1
    // short    短整型 2
    // int（integer） 整数   4
    // long     长整型 4
    // float    单精度浮点型 4
    // double   双精度浮点型 8
    // void     无类型
    // 3、总结
    // - 数据是存在内存中的，在内存中存取数据要明确三件事情：
    // ==> 数据存储在哪里?
    // ==> 数据的长度？
    // ==> 数据的处理方式？
    // 变量名不仅给变量起了个好记得名字，还告诉我们数据存储在哪里
    // 数据类型告诉我们数据的长度和处理方式
    // -  强数据类型 + 弱数据类型

    // 二、在屏幕上输出各种类型的数据
    // 1、puts("output string"); // <output string> 只能用来输出字符串 。puts 输出完成后会自动换行
    // 2、printf("printf"); // 可以输出整数、小数、单个字符串，输出格式可以自定义。 printf 不会自动换行，要自己添加换行符 \n
    // %d: 输出一个十进制整形。d 是 decimal 的简写。表示以十进制整数的形式输出
    // %c：输出一个字符。c 是 character 的简写。
    // %s：输出一个字符串。s 是 string 的简写。
    // %f：输出一个小数。f 是 float 的简写。
    // 注意字符串必须是双引号
    printf("printf");
    int abc = 999;
    printf("The value of abc is %d !", abc); // decimal 十进制。abc 替换前面的 %d
    int n = 100;
    char c = '@';  //字符用单引号包围，字符串用双引号包围
    float money = 93.96;
    printf("n=%d, c=%c, money=%f\n", n, c, money); // 前后一一对应

    getch(); // 
    system("pause");
}
