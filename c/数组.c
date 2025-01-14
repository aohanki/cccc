#include <stdio.h>

// int main()
// {
//     //数组是同类型数据的元素集合
//     //数组是用下标来进行访问的

//     int arr[10]= {1,2,3,4,5,6,7,8,9,10};
//     int i = 0;
//     while(i<10){
//         printf("arr[%d]=%p\n",i,&arr[i]);
//         i++;
//     }
//     return 0;
// }

// int main()
// {
//     int arr[3][4] = {{1,2,3,4},{2,3,4,5},{3,4,5,6}};
//     int i = 0;
//     for(i = 0;i<3;i++){
//         int j = 0;
//         for(j = 0;j<4;j++){
//             scanf("%d ",&arr[i][j]);
//         }
//     }
//     for(i = 0;i<3;i++){
//         int j = 0;
//         for(j = 0;j<4;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main()
// {
//     int arr[3][4] = {{1,2,3,4},{2,3,4,5},{3,4,5,6}};
//     int i = 0;
//     for(i = 0;i<3;i++){
//         int j = 0;
//         for(j = 0;j<4;j++){
//             printf("arr[%d][%d] = %p \n",i,j,&arr[i][j]);
//         }
//     }
//     return 0;
// }

int main()
{
    //数组名确实能表示首元素的地址
    //但是有两个例外
    //1.sizeof(数组名),这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
    //2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
    int arr[10];
    printf("%p\n",arr);//arr就是首元素的地址
    printf("%p\n",arr+1);
    printf("--------------\n");
    printf("%p\n",&arr[0]);//首元素地址
    printf("%p\n",&arr[0]+1);
    printf("--------------\n");
    printf("%p\n",&arr);//数组的地址
    printf("%p\n",&arr+1);

    return 0;
}