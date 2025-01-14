#include <stdio.h>
// int main()
// {
//     printf("     **\n");
//     printf("     **\n");
//     printf("************\n");   
//     printf("************\n");
//     printf("    *  *\n");
//     printf("    *  *\n");

//     return 0;
// }
// int main()
// {
//     printf("Name    Age    Gender\n");
//     printf("-------------------\n");
//     printf("jack    18     man\n");
//     return 0;
// }
// int main()
// {
//     int a =40,c = 212;
//     int d = (-8+22)*a-10+(c/2);
//     printf("%d\n",d);
//     return 0;
//     EOF
// }
// int acc(int x,int y)
// {
//     return x>y?x:y;
// }
// int main()
// {
//     int a,b;
//     printf("输入两个数字求最大的数\n");
//     scanf("%d%d",&a,&b);
//     int c = acc(a,b);
//     printf("%d",c);
//     return 0;
// }
int main()
{
    int x =0;
    int y = 0;
    scanf("%d",&x);
    if(x>0){
        y=-1;
    }else if(x==0){
        y=0;
    }else{
        y=1;
    }
    printf("%d",y);
    return 0;
}