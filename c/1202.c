#include <stdio.h>
//static
//修饰局部变量
//修饰全局变量,会改变变量的链接方式，由原来的外部链接变为内部链接
//修饰函数
// void test()
// {
//     static int a = 1;
//     a++;
//     printf("%d ",a);
// }
// int main()
// {
//     int i = 0;
//     while (i<10)
//     {
//         test();
//         i++;
//     }
    
//     return 0;
// }
// void test()
// {
//     printf("hello word");
// }
// int main()
// {
//     test();
//     return 0;
// }
//extern声明外部符号，其他文件里的变量
// extern int a;
// int main()
// {
//     printf("%d",a);
//     return 0;
// }
//static 修饰函数
//函数也具有外部链接属性，当被修饰过后就会变成内部属性，导致无法被引用
// int Add(int x,int y)
// {
//     return x+y;
// }
// extern int Add(int x,int y);
// int main()
// {
//     int a = 10;
//     int b = 20;
//     int z = Add(a,b);
//     printf("%d",z);
//     return 0;
// }
// int main()
// {
//     //寄存器变量，寄存器变量主要提高访问和读取速度
//     register int num = 3;//建议：3存放在寄存器中，但只是建议
// }

//define定义标识符常量
#define num 100
//#define定义宏
//宏是有参数的
#define ADD(x,y) x+y
int main()
{
    // printf("%d\n",num);
    // int n = num;
    // printf("%d\n",n);
    int a = 10;
    int b = 20;
    int c = ADD(a,b);
    printf("%d",c);
    return 0;
}