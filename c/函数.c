#include <stdio.h>

//函数
// int Add(int x, int y)
// {
//     int z;
//     z = x+y;
//     return z;
// }
// int main ()
// {
//     int num1,num2;
//     scanf("%d%d",&num1,&num2);
//     int sum = Add(num1,num2);
//     printf("sum = %d\n",sum);
// }

// #include <string.h>
// int main()
// {
//     //strcpy()函数的使用
//     // char arr1[20] = {0};
//     // char arr2[] = "hello bit";
//     // strcpy(arr1,arr2);//需要引用头文件#include <string.h>
//     // printf("%s\n",arr1);

//     //memset()函数的使用
//     char arr[20] = "hello wordl";
//     memset(arr,'x',5);//在arr后面加上数字可以对要修改的字符进行偏移
//     printf("%s\n",arr);
//     return 0;
// }

//最大值
// void get_max(int x,int y)
// {
//     int max = 0;
//     max = x>y?x:y;
//     printf("最大值是：%d\n",max);
// }
// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf("%d %d",&a,&b);
//     get_max(a,b);
    
//     return 0;
// }

//交换整形变量
//x,y为形式参数
// int Swap(int x,int y)
// {
//     int sum = 0;
//     sum = x;
//     x = y;
//     y = sum;
//     return 0;
// }
// void Swap(int* px,int* py)
// {
//     int z = *px;//z=a
//     *px = *py;  //a=b
//     *py = z;    //b=z
// }
//当实参传递给形参时，形参是实参的一份临时拷贝。对形参的影响不会改变实参。
// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf("%d %d",&a,&b);
//     //交换函数
//     printf("交换前,a:%d b:%d\n",a,b);
//     //a,b为实参
//     Swap(a,b);
//     // Swap(&a,&b);
//     printf("交换后,a:%d b:%d\n",a,b);
//     return 0;
// }

//100-200之间的素数
// int main()
// {
//     int i = 0;
//     int count = 0;
//     for(i = 100;i<=200;i++)
//     {
//         //判断i是不是素数
//         //是素数就打印
//         //拿2~i之间的数字去试除i
//         int flag = 1;
//         int j = 0;
//         for(j=2;j<=i-1;j++)
//         {
//             if(i%j == 0)
//             {
//                 flag = 0;
//                 break;
//             }
//         }
//         if(flag == 1)
//         {
//             count++;
//             printf("%d ",i);
//         }
//     }
//     printf("\ncount = %d\n",count);
//     return 0;
// }
//优化过后
// #include <math.h>
// int main()
// {
//     int i = 0;
//     int count = 0;
//     for(i = 100;i<=200;i++)
//     {
//         //判断i是不是素数
//         //是素数就打印
//         //拿2~i之间的数字去试除i
//         int flag = 1;
//         int j = 0;
//         for(j=2;j<=sqrt(i);j++)//sqrt()函数开平方
//         {
//             if(i%j == 0)
//             {
//                 flag = 0;
//                 break;
//             }
//         }
//         if(flag == 1)
//         {
//             count++;
//             printf("%d ",i);
//         }
//     }
//     printf("\ncount = %d\n",count);
//     return 0;
// }

// #include <math.h>
//是素数返回1，不是返回0
// int is_prime(int n)
// {

//     int j = 0;
//     for(j=2;j<=sqrt(n);j++)//sqrt()函数开平方
//     {
//         if(n%j == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;

// }
// int main()
// {
//     int i = 0;
//     int count = 0;
//     for(i = 100;i<=200;i++)
//     {
//         //判断i是不是素数
//         //是素数就打印
//         //拿2~i之间的数字去试除i
//         if(is_prime(i)){
//             printf("%d ",i);
//             count++;
//         }
//     }
//     printf("\ncount = %d\n",count);
//     return 0;
// }

//写一个函数判断是不是闰年
//闰年判断的规则能被4整除，并且不能被100整除
//能被400整除
// int main()
// {
//     int year =0;
//     int i = 0;
//     for(year=1000;year<=2000;year++)
//     {
//         //判断是不是闰年
//         if(year%4 == 0 && year%100 != 0 || year%400 ==0)
//         {
//             printf("%d ",year);
//             i++;

//         }
//     }
//     printf("\n一共有%d个\n",i);
//     return 0;
// }
// int is_leap_year(int x)
// {
//     if(((x%4 == 0) && (x%100 != 0)) || x%400 ==0)
//     {
//         return 1;
//     }else{
//         return 0;
//     }
// }
// int main()
// {
//     int year = 0;
//     scanf("%d",&year);
    
//     if(is_leap_year(year))
//     {
//         printf("%d年是闰年",year);
//     }
//     return 0;
// }

//写一个函数，实现一个整形有序数组的二分查找
//形参和实参的名字可以相同，也可以不同
//数组传参实际上传递的是数组的首个元素的地址，而不是整个数组
//所以在函数的内部计算一个函数参数部分的数组元素个数是不正确的
// int binary_srarch(int arr[],int k,int sz)
// {
//     int left = 0;
//     int right = sz-1;
//     // int sz = sizeof(arr)/sizeof(arr[0]);err
//     while(left<=right){
//         int mid = left+(right-left)/2;
//             if(arr[mid]<k)
//         {
//             left = mid + 1;
//         }else if(arr[mid]>k){
//             right = mid - 1;
//         }else if(arr[mid]==k){
//             return mid;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int k = 7;
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     //找到了返回下标
//     //找不到返回-1

//     int ret = binary_srarch(arr,k,sz);
//     if(ret == -1){
//         printf("找不到\n");
//     }else{
//         printf("找到了，下标为%d\n",ret);
//     }
//     return 0;
// }

//写一个函数，每调用一次，num就加1
// void Add(int* p)
// {
//     (*p)++;
// }
// int main()
// {
//     int num = 0;
//     Add(&num);
//     printf("%d\n",num);//1
//     Add(&num);
//     printf("%d\n",num);//2
//     return 0;
// }

//函数嵌套
// int Add(int x,int y)
// {
//     return x+y;
//     //不可以在函数内部再定义函数
//     // int Sub(int x,int y)
//     // {
//     //     return x-y;
//     // }
// }
// int Sub(int x,int y)
// {
//     return x-y;
// }
// int main()
// {

//     return 0;
// }

//链式访问
// #include <string.h>
// int main()
// {
//     // int len = strlen("abcdef");
//     // printf("%d\n",len);

//     // //链式访问
//     // printf("%d\n",strlen("abcdef"));

//     printf("%d",printf("%d",printf("%d",43)));//printf()返回的值为打印了多少个字符
//     return 0;

// }

//函数不写返回值的时候，默认返回类型为int。不建议不写返回值
// Add(int x,int y)
// {
//     return x+y;
// }
// int main()
// {
//     int a = 10;
//     int b = 20;
//     int c = Add(a,b);
//     printf("%d\n",c);
//     return 0;
// }

//函数的声明和定义

//函数声明
// int Add(int x,int y);

// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf("%d %d",&a,&b);
//     int sum = Add(a,b);
//     printf("%d\n",sum);
//     return 0;

// }

// //函数的定义
// int Add(int x,int y)
// {
//     return x+y;
// }

//接收一个整形值(无符号)，按照顺序打印它的每一位
//例如输入1234，输出1 2 3 4.
//%d 打印的是有符号的整数(会有负数)
//%u 打印的是无符号的整数

// int main()
// {
//     unsigned int num = 0;//unsigned是用于定义无符号整数
//     scanf("%d",&num);
//     while(num)
//     {
//         printf("%d ",num % 10);
//         num /= 10;
//     }
//     return 0;
// }

//递归函数解决
//拆解成
//print(1234)
//print(123) 4
//print(12) 3 4
//print(1) 2 3 4
// void print(unsigned int n)
// {
//     if(n>9){
//         print( n / 10);
//     }
//     printf("%d ",n%10);
// }
// int main()
// {
//     unsigned int num = 0;
//     scanf("%u",&num);
//     print(num);
//     return 0;
// }

//编写函数不允许创建临时变量，求字符串长度
// int my_strlen(char* str)
// {
//     int count = 0;//计数，临时变量
//     while(*str != '\0')
//     {
//         count++;
//         str++;//找下一个字符
//     }
//     return count;
// }

//递归
//判断是不是\0不是就加1
//my_strlen("abc");
//1+my_strlen("bc");
//1+1my_strlen("c");
//1+1+1my_strlen("");
// int my_strlen(char* str)
// {
//     if(*str != '\0')
//     {
//         return 1 + my_strlen(str+1);
//     }else{
//         return 0;
//     }
// }
// int main()
// {
//     // char arr[] = "abc";//[a b c \0]
//     char arr[] = {0};
//     scanf("%s",arr);
//     int len = my_strlen(arr);
//     printf("%d\n",len);
//     return 0;
// }


//递归  n的阶乘
// int fac(int n)
// {
//     if(n<=1)
//     {
//         return 1;
//     }else{
//         return n*fac(n-1);
//     }
// }
// int main()
// {
//     unsigned int n = 0;
//     scanf("%u",&n);
//     int sum = fac(n);
//     printf("%d",sum);
//     return 0;
// }

//递归 求第n个斐波那锲数
//斐波那切数列 1 1 2 3 5 8
//太繁琐计算多次
// int Fib(int n)
// {
//     if(n<=2)
//     {
//         return 1;
//     }else{
//         return Fib(n-1) + Fib(n-2);
//     }
// }
// int Fib(int n)
// {
//     int a = 1;
//     int b = 1;
//     int c = 1;
//     while(n>=3)
//     {
//         c = a + b;
//         a = b;
//         b = c;
//         n--;
//     }
//     return c;
// }
// int main()
// {
//     int n = 0;
//     scanf("%d",&n);
//     int ret = Fib(n);
//     printf("%d",ret);
//     return 0;
// }

// void move(char pos1,char pos2)
// {
//     printf(" %c->%c ",pos1,pos2);
// }
// /*
// n代表盘子个数
// pos1代表起始位置
// pos2代表中转位置
// pos3代表目的位置
// */
// //                     起始位。   中转。     目的
// void Hanoi(int n,char pos1,char pos2,char pos3)
// {
//     //终止条件
//     if(n==1)
//     {
//         move(pos1,pos3);
//     }else{
//         Hanoi(n-1,pos1,pos3,pos2);
//         move(pos1,pos3);
//         Hanoi(n-1,pos2,pos1,pos3);
//     }

// }
// int main()
// {
//     Hanoi(3,'A','B','C');
//     return 0;
// }

