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
    puts("output""string""输出"); // 可以将一个较长的字符串分割成几个较短的字符串，这样会使得长文本的格式更加整齐。只是形式上的分割。
    // 2、printf("printf"); // 可以输出整数、小数、单个字符串，输出格式可以自定义。 printf 不会自动换行，要自己添加换行符 \n
    // %d: 输出一个十进制整形。d 是 decimal 的简写。表示以十进制整数的形式输出
    // %c：输出一个字符。c 是 character 的简写。
    // %s：输出一个字符串。s 是 string 的简写。
    // %f：输出一个小数。f 是 float 的简写。
    // 注意字符串必须是双引号
    printf("printf\n");
    int abc = 999;
    printf("The value of abc is %d !\n", abc); // decimal 十进制。abc 替换前面的 %d
    int n = 100;
    char c = '@';  //字符用单引号包围，字符串用双引号包围
    float money = 93.96;
    printf("n=%ds, c=%c, money=%f\n", n, c, money); // 前后一一对应

    // 三、整型
    // short、int、long 是C语言中常见的整数类型，其中 int 称为整型，short 称为短整型，long 称为长整型。
    // int 是基本的整数类型，short 和 long 是在 int 的基础上进行的扩展，short 可以节省内存，long 可以容纳更大的值。
    // 1、整型的长度
    // 一种数据类型占用的字节数，称为该数据类型的长度。例如，short 占用 2 个字节的内存，那么它的长度就是 2
    // C语言并没有严格规定 short、int、long 的长度，只做了宽泛的限制：
    // - short 至少占用 2 个字节。
    // - int 建议为一个机器字长。32 位环境下机器字长为 4 字节，64 位环境下机器字长为 8 字节。
    // - short 的长度不能大于 int，long 的长度不能小于 int。
    // - 16 位环境下(单片机和低级嵌入式系统) : short(2) int(2) ，long(4)。
    // - 32 位的 Windows、Linux 和 Mac OS: short(2) int(4)  long(4)
    // - 64位 Win64（64位 Windows）:	short(2)	int(4)	long(4)
    // - 64位 类Unix系统（包括 Unix、Linux、Mac OS、BSD、Solaris 等）:	short(2) int(4)	long(8)
    // 总结： 2 ≤ short ≤ int ≤ long
    // sizeof 操作符：// 获取某个数据类型的长度可以使用 sizeof 操作符。操作符不是函数，可以不带()，但是如果是数据类型的话得带着()
    short asize = 10;
    int bsize = 100;
    int short_length = sizeof asize; // 变量名的话可以省略()
    int int_length = sizeof(bsize); 
    int long_length = sizeof(long);
    int char_length = sizeof(char);
    printf("short=%d, int=%d, long=%d, char=%d\n", short_length, int_length, long_length, char_length);

    // 不同类型的输出
    // 使用不同的格式控制符可以输出不同类型的整数，它们分别是：
    // %hd用来输出 short int 类型，hd 是 short decimal 的简写；
    // %d用来输出 int 类型，d 是 decimal 的简写；
    // %ld用来输出 long int 类型，ld 是 long decimal 的简写。
    short shortOut = 10;
    int intOut = 100;
    long longOut = 9437; // 一般输出%d也没错。但是当数据大于int长度时，就得用%ld了.
    printf("shortOut=%hd, intOut=%d, longOut=%ld\n", shortOut, intOut, longOut);
    // 编译器的警告是分等级的，不同程度的风险被划分成了不同的警告等级，而使用%d输出 short 和 long 类型的风险较低，
    // 如果你的编译器设置只对较高风险的操作发出警告，那么此处你就看不到警告信息。

    // 四、二进制数、八进制数和十六进制数的表示
    // =========end======================
    getch(); 
    system("pause");
}
