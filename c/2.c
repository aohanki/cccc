#include  <stdio.h>
#include <string.h>
enum sex
//枚举变量
{
    male,
    fmale,
    secret
};
int main ()
{
    // int a,b,sum;
    // scanf("%d%d",&a,&b);
    // sum = a + b;
    // printf("sum = %d\n",sum);
    
    //枚举变量
    // enum sex s = male;
    // printf("male= %d\n",male);
    // printf("fmale= %d\n",fmale);
    // printf("secret= %d\n",secret);


    // char arr1[ ] = "abc";
    //字符串结束标志\0
    // printf("%d\n",strlen(arr1));

    //转义字符
    // printf("%c\n",'\130'); //8进制
    // printf("%c\n",'\x30'); //16进制

    //选择语句
    // int input = 0;
    // printf("你是否要好好学习。\n");
    // printf("做出你的选择。(1/0)\n");
    // scanf("%d",&input);
    // if(input == 1){
    //     printf("收获一份好的offer\n");
    // }else{
    //     printf("回家卖红薯\n");
    // }
    // return 0;

    //循环whlie
    char a;
    int c,i=1;
    printf("加入比特。\n");
    printf("是否买彩票.\n");
    scanf("%c",&a);
    if(a == 'y')
    {
        printf("可能中奖也可能不中奖。\n");
        printf("1中奖0不中\n");
        scanf(" %d",&c);
        if(c==1){
            printf("恭喜你中奖了，迎娶白富美。\n");
        }else{
            printf("老实学习%d年",i);
            while(i<6){
                printf("老实学习第%d年.\n",i);                
                if(i==5){
                    printf("在第%d年成为大牛,迎娶白富美.\n",i);
                }
                i++;
            }
        }
    }else{
        printf("老实学习%d年",i);
            while(i<6){
                printf("老实学习第%d年.\n",i);               
                if(i==5){
                    printf("在第%d年成为大牛,迎娶白富美.\n",i);
                }
                i++;
            }
    }
    return 0;
}

