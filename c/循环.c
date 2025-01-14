#include  <stdio.h>
//计算n的阶乘
// int main()
// {
//     int i = 1;
//     int n = 0;
//     int ret = 1;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         ret = ret * i;
//     }
//     printf("%d\n",ret);

//     return 0;
// }

int main()
{
    int i = 1;
    int n = 0;
    int ret = 1;
    int sum = 0;
    for(n = 1;n<=10;n++){
        ret = ret *n;
        sum = sum + ret;
    }
    
    printf("%d\n",sum);
    return 0;
}